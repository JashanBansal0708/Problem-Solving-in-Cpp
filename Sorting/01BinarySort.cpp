#include<iostream>

void binarySort(int arr[], int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    for(int i=0; i<n; i++){
        if(i<count){
            std::cout << 0 << " ";
            continue;
        }
        std::cout << 1 << " ";
    }
    std::cout << '\n';
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int *arr = new int[n];
        for(int i=0; i< n; i++){
            std::cin >> arr[i];
        }
        binarySort(arr,n);
        delete[] arr;
    }
}
