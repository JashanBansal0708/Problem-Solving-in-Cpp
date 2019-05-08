#include<iostream>

void binSearch(int arr[], int n, int key){
    int l=0,r=n-1, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid] > key){
            r = mid-1;
        }
        else if(arr[mid] < key){
            l = mid+1;
        }
        else{
            std::cout<< arr[mid] << '\n';
            return;
        }
    }
    std::cout << "-1" << '\n';
}

int main(){
    int t;
    int *arr, n;
    int key;
    std::cin >>t;
    while(t--){
        std::cin >>n;
        arr = new int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr[i];
        }
        std::cin >> key;
        binSearch(arr,n, key);
        delete[] arr;
    }
    return 0;
}
