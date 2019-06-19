#include<bits/stdc++.h>

using namespace std;

string str;
vector<string> res;
string per= "";
int *visited;

void perm(int i){
    per.push_back(str[i]);
    visited[i] = 1;
    if(per.length() == str.length()){
        res.push_back(per);
        per.pop_back();
        visited[i] = 0;
        return;
    }
    for(int j=0; j<str.length(); j++){
        if(!visited[j]){
            perm(j);
        }
    }
    per.pop_back();
    visited[i] = 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> str;
        visited = new int[str.length()]{0};
        for(int i=0; i< str.length(); i++){
            perm(i);
        }
        sort(res.begin(), res.end());
        for(int i=0; i< res.size(); i++){
            cout << res[i] << " ";
        }
        delete[] visited;
        cout << '\n';
        res.clear();
    }
}
