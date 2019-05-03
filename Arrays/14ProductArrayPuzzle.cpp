#include<iostream>

void productArray(int arr[], int n){
    int product= 1;
    for(int i=0;i<n; i++){
        product*= arr[i];
    }
    for(int i=0;i<n; i++){
        arr[i] = product/arr[i];
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}

int main(){
    int *arr,t,n;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        arr= new int[n];
        for(int i=0; i< n; i++){
            std::cin >> arr[i];
        }
        productArray(arr,n);
        delete[] arr;
    }
    return 0;
}
