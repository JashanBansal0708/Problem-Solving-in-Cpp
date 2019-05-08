#include<iostream>

void binSearch(int arr[], int n, int key){

    if(key < arr[0]){
        std::cout << "-1" << '\n';
        return;
    }

    if(key >= arr[n-1]){
        std::cout << n-1 << '\n';
        return;
    }

    int l=0,r=n-1, mid;
    int index=-1;

    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid] > key){
            r = mid-1;
            if(arr[r]<key){
                index = r;
                break;
            }
        }
        else if(arr[mid] < key){
            l = mid+1;
            if(arr[l]>key){
                index = mid;
                break;
            }
        }
        else{
            std::cout<< mid << '\n';
            return;
        }
    }
    std::cout << index << '\n';
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
        binSearch(arr,n, key);
        delete[] arr;
    }
    return 0;
}
