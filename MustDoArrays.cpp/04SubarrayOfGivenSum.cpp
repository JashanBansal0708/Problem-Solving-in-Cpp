#include<bits/stdc++.h>
using namespace std;

void findSub(long arr[], int n, int sum){
    unordered_map<int, int> lookup;
    lookup[0] = -1;
    int s =0;
    for(int i=0; i< n; i++){
        s += arr[i];
        if(lookup.find(s-sum) == lookup.end()){
            lookup[s] = i;
        }
        else{
            cout << lookup[s-sum]+2 << " "  << i+1 <<  '\n';
            return;
        }
    }
    cout << "-1" << '\n';
}

int main(){
    int t, n, sum;
    long *arr;
    cin >> t;
    while(t--){
        cin >> n >> sum;
        arr = new long[n];
        for(int i=0; i< n; i++){
            cin >> arr[i];
        }
        findSub(arr, n, sum);
        delete[] arr;
    }
    return 0;
}
