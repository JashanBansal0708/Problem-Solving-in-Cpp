#include<iostream>

void check(int *arr , int n ){
    for(int i=0; i< n; i++){
        int index = arr[i]%n;
        arr[index] +=n;
    }
    for(int i=0; i<n; i++){
        std::cout << (arr[i]/n) << " ";
    }
    std::cout << '\n';
}

int main(){
    int t, n, *arr;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        arr = new int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr[i];
            arr[i]--;
        }
        check(arr,n);
        delete[] arr;
    }
}
