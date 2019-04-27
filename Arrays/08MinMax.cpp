#include<iostream>
using namespace std;

void minMax(int arr[], int n){
    int min= arr[0];
    int max = arr[0];
    for(int i=1; i< n; i++){
        if(arr[i]> max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    cout << min << " " << max << '\n';
}

int main(){
    int *arr, t, n;
    cin >> t;
    while(t--){
        cin >> n;
        arr = new int[n];
        for(int i=0; i<n ; i++){
            cin >> arr[i];
        }
        minMax(arr, n);
    }
}
