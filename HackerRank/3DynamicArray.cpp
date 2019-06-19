#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n);     // See how the array size
    int lastAnswer = 0;
    int q;
    cin >> q;
    int queries[q][3];
    for(int i=0; i< q; i++){
        cin >> queries[i][0];
        cin >> queries[i][1];
        cin >> queries[i][2];
    }

    int index = -1;
    for(int i=0; i< q; i++){
        int check = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];
        int index = ((x ^ lastAnswer) % n);
        if(check == 1){
            arr[index].push_back(y);
        }
        else{
            lastAnswer = arr[index][y % arr[index].size()];
            cout << lastAnswer << '\n';
        }
    }
    return 0;
}