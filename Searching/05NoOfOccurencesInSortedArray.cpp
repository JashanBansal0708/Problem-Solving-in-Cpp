#include<iostream>

void binSearchOccurences(int arr[], int n, int key){
    int occur = 0;
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
            occur = 1;
            int index = mid;
            while(arr[--mid] == key && mid > -1){
                occur++;
            }
            mid = index;
            while(arr[++mid] == key && mid < n){
                occur++;
            }
            std::cout<< occur << '\n';
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
        std::cin >> key;
        arr = new int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr[i];
        }
        binSearchOccurences(arr,n, key);
        delete[] arr;
    }
    return 0;
}
