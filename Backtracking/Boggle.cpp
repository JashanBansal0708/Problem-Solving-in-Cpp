    #include<bits/stdc++.h>
    using namespace std;

    vector<string> words;
    char **boggle;
    int n,m;
    int **visited;
    string word;

    int maxLen;
    vector<string> result;
    void res(int r, int c){
        visited[r][c] = 1;
        word.push_back(boggle[r][c]);
        vector<string>::iterator it = find(words.begin(), words.end(), word) ;
        if ( it != words.end())
        {
            result.push_back(word);
            //cout << word << " ";
            words.erase(it, it+1);
        }

        if(words.empty()){
            word.pop_back();
            visited[r][c] = 0;
            return;
        }
        if(word.length() == maxLen){
            word.pop_back();
            visited[r][c] = 0;
            return;
        }


        for(int i=r-1; i< r+2 && i < n; i++){
            for(int j = c-1; j < c+2 && j < m; j++){
                if(i >=0 && j >=0 && !visited[i][j]){
                    res(i,j);
                }
            }
        }
        visited[r][c] = 0;
        word.pop_back();
    }

    int main(){
        int t, num;
        string w;
        cin >> t;
        while(t--){
            cin >> num;
            while(num--){
                cin >> w;
                cin.ignore();
                words.push_back(w);
            }

            maxLen =  words[0].length();
            int len ;
            for(int i=1; i< words.size(); i++){
                len = words[i].length();
                maxLen = max(maxLen, len);
            }

            cin >> n >> m ;
            boggle = new char*[n];
            visited = new int*[n];
            for(int i=0; i< n; i++){
                boggle[i] = new char[m];
                visited[i] = new int[m]{0};
            }


            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cin >> boggle[i][j];
                }
            }

            for(int i=0; i< n; i++){
                for(int j=0; j<m; j++){
                    res(i,j);
                }
            }

            sort(result.begin(), result.end());
            if(result.empty()){
                cout << "-1";
            }
            else{
                for(int i=0; i< result.size(); i++){
                    cout << result[i] << " ";
                }
            }

            for(int i=0; i< n; i++){
                delete[] boggle[i];
                delete[] visited[i];
            }
            delete[] boggle, visited;
            cout << '\n';
            words.clear();
            result.clear();
        }
        return 0;
    }

