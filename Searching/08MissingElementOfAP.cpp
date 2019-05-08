#include<iostream>

void missingAP(int arr[], int n){
    int a = arr[0];
    int l= arr[n-1];
    int d = (l-a)/n;
    int value = a;
    for(int i=0; i<n; i++){
        if(arr[i] != value){
            std::cout << value << '\n';
            return ;
        }
        value += d;
    }
}

int main(){
    int t,n,*arr;
    std::cin >>t;
    while(t--){
        std::cin>> n;
        arr = new int[n];
        for(int i=0; i< n; i++){
            std::cin >> arr[i];
        }
        missingAP(arr,n);
    }
    return 0;
}

