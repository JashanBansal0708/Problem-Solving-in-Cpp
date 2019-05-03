
#include<iostream>

void waveArray(int arr[], int n){
    for(int i=0;i<n; i+=2){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
    for(int i=0;i<n-1; i++){
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
        waveArray(arr,n);
        delete[] arr;
    }
    return 0;
}
