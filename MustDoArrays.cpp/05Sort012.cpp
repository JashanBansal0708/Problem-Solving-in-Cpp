#include<bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n){
    int one=0, two=0, zero=0;
    for(int i=0; i< n; i++){
        if(arr[i]==0) zero++;
        else if(arr[i]==1) one++;
        else two++;
    }
    while(zero--){
        cout<< "0" << " ";
    }
    while(one--){
        cout<< "1" << " ";
    }
    while(two--){
        cout<< "2" << " ";
    }
    cout << '\n';
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
        sortArr(arr, n);
        delete[] arr;
    }
    return 0;
}
