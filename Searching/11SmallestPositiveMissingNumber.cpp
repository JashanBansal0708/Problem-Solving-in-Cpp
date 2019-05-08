#include<iostream>
#include<cmath>

void findSmallest(int arr[], int n){
    for(int i=0; i< n; i++){
        int value = arr[i]%1000001;
        if(value > 0 && value<= n){
            if(arr[value-1] < 0){
                arr[value-1] -= 1000001;
            }
            else{
                arr[value-1] += 1000001;
            }
        }
    }
    for(int i=0; i< n; i++){
        if(std::abs(arr[i])/1000001 < 1){
            std::cout << i+1 << '\n';
            return;
        }
    }
    std::cout << n+1 << '\n';
}

int main(){
    int t;
    int *arr, n;
    std::cin >>t;
    while(t--){
        std::cin >>n;
        arr = new int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr[i];
        }
        findSmallest(arr,n);
    }
    return 0;
}
