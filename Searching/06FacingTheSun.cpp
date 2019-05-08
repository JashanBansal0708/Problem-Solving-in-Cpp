#include<iostream>

void countBuildings(int arr[], int n){
    int max = arr[0];
    int countBuil =1;
    for(int i=1; i< n; i++){
        if(arr[i] > max){
            countBuil++;
            max = arr[i];
        }
    }
    std::cout<< countBuil << '\n';
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
        countBuildings(arr,n);
        delete[] arr;
    }
    return 0;
}
