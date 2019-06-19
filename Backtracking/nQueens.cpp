#include<bits/stdc++.h>
using namespace std;

vector<int> perm;
int flag;
int n;
int **arr;

bool isSafe(int r, int c){
    for(int i=0; i< c; i++){
        if(arr[r][i] == 1){
            return false;
        }
    }

    for(int i=r, j=c; i>=0 && j>=0; i--, j--){
        if(arr[i][j] == 1)
            return false;
    }

    for(int i=r, j=c; i<n && j<n; i++, j--){
        if(arr[i][j] == 1)
            return false;
    }

    return true;
}

void res(int c){
    if(c == n){
        cout << "[" ;
        for(int i=0; i< n; i++){
            cout << perm[i] << " ";
            flag = 1;
        }
        cout << "]" << " ";
    }

    for(int i=0; i< n; i++){
        if(isSafe(i, c)){
            arr[i][c] = 1;
            perm.push_back(i+1);
            res(c+1);
            perm.pop_back();
            arr[i][c] = 0;
        }
    }
}


int main()
 {
     int t;
     cin >> t;
     while(t--){
        cin >> n;
        arr = new int*[n];

        for(int i = 0; i < n; ++i)
            arr[i] = new int[n]{0};

        res(0);

        if(flag == 0){
            cout << "-1";
        }
        else{
            flag = 0;
        }
        cout << '\n';

        for(int i = 0; i < n; ++i) {
            delete [] arr[i];
        }
        delete [] arr;

     }
	 return 0;
}
