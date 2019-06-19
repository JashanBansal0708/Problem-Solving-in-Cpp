#include<bits/stdc++.h>
using namespace std;

void findLar(int arr[], int n){
    unordered_map<int, int> lookup;
    lookup[0] = -1;
    int l = 0;
    int sum =0;
    for(int i=0; i< n; i++){
        sum += (arr[i]==0)? -1: 1;
        if(lookup.find(sum) == lookup.end()){
            lookup[sum] = i;
        }
        l = max(l, (i-lookup[sum]));
    }
    cout << l << '\n';
}

int main(){
    int t, n, *arr;
    cin >> t;
    while(t--){
        cin >> n;
        arr = new int[n];
        for(int i=0; i< n; i++){
            cin >> arr[i];
        }
        findLar(arr, n);
        delete[] arr;
    }
    return 0;
}
