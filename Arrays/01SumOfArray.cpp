#include<iostream>
using namespace std;

int findSum(int arr[], int n){
    int sum = 0;
    for(int i=0; i< n; i++){
        sum += arr[i];
    }
    return sum;
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
        cout << "Sum is " << findSum(arr,n) << '\n';
        delete[] arr;
    }
    return 0;
}
