#include<iostream>
#include<cmath>
void findThem(int arr[], int n){
    int index;
    for(int i=1; i< n+1; i++){
        index = std::abs(arr[i]);
        if(arr[index] <0){
            std:: cout << index << " ";
        }
        else{
            arr[index] *= -1;
        }
    }
    for(int i=1; i< n+1; i++){
        if(arr[i] > 0){
            std::cout << i;
            break;
        }
    }
    std::cout << '\n';
}

int main(){
    int t;
    int n, *arr;
    std::cin >>t;
    while(t--){
        std::cin >> n;
        arr = new int[n+1];
        arr[0] =0;
        for(int i=1; i< n+1; i++){
            std::cin >> arr[i];
        }
        findThem(arr,n);
        delete[] arr;
    }
    return 0;
}
