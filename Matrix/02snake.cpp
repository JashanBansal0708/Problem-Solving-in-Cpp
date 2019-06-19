#include<iostream>

void trans(int **arr, int n){
    for(int i=0; i< n; i++){
        if(i % 2 == 0){
            for(int j = 0; j<n; j++){
                std::cout << arr[i][j] << " ";
            }
        }
        else{
            for(int j = n-1; j > -1; j--){
                std::cout << arr[i][j] << " ";
            }
        }
    }
    std::cout << '\n';
}


int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int **arr;
        arr = new int*[n];
        for(int i=0; i<n; i++){
            arr[i] = new int[n];
        }
        for(int i=0; i< n; i++){
            for(int j=0; j< n; j++){
                std::cin >> arr[i][j];
            }
        }
        trans(arr,n);
        delete[] arr;
    }
}
