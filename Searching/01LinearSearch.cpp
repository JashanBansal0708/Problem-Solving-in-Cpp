// 0.36 running time

#include<iostream>

void linSearch(int arr[], int n, int key){
    for(int i=0; i< n; i++){
        if(key == arr[i]){
            std::cout << i+1 <<'\n';
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
        linSearch(arr,n, key);
    }
    return 0;
}
