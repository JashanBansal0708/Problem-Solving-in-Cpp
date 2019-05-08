// Execution time 0.37--- No difference

#include<iostream>

void linSearch(int arr[], int n, int key){
    for(int i=0; i< n; i++){
        if(key == arr[i]){
            std::cout << i+1 <<'\n';
            return;
        }
    }
    std::cout << "-1" << '\n';
}

int main(){
    int t;
    int *arr, n;
    int key;
    std::cin >>t;
    while(t--){
        std::cin >>n;
        std::cin >> key;
        arr = new int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr[i];
        }
        int i=0;
        for( ; i< n; i++){
            if(key == arr[i]){
                std::cout << i+1 <<'\n';
                break;
            }
        }
        if(i==n){
            std::cout << "-1" <<'\n';
        }
    }
    return 0;
}
