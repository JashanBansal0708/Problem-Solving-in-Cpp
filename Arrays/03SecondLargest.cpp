#include<iostream>

using namespace std;

void secondL(int arr[], int n){
    int first=0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[first]){
            first = i;
        }
    }
    int temp = arr[first];
    arr[first] = arr[n-1];
    arr[n-1] = temp;
    int second = 0;
    for(int i=1; i< n-1; i++){
        if(arr[i] > arr[second]){
            second = i;
        }
    }
    cout << arr[second] << '\n';
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
        secondL(arr, n);
        delete[] arr;
    }
}
