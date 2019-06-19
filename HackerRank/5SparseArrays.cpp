#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    string queries[m];
    int result[m] = {0};
    for(int i=0; i< m; i++){
        cin >> queries[i];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(queries[i].compare(arr[j]) == 0){
                result[i]++;
            }
        }
    }

    for(int i=0; i< m; i++){
        cout<< result[i] << '\n';
    }
    return 0;
}
