#include<iostream>

void trans(int **arr, int n){
    for(int i=0; i< n; i++){
        for(int j=0; j<n; j++){
            std::cout << arr[j][i];
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
