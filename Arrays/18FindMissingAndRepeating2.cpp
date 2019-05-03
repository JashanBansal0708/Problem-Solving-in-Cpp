// Same complexity but approach different


#include<iostream>
#include<cmath>
void findThem(int arr[], int n){
    int index;
    for(int i=1; i< n+1; i++){
        index = arr[i]%n;
        arr[index] += n;
        if(arr[index]/n == 2){
            std:: cout << index << " ";
        }
    }
    for(int i=1; i< n+1; i++){
        if(arr[i]/n == 0){
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
