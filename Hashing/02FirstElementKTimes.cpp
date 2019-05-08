#include<iostream>
#include<unordered_map>

void check(int *arr , int n, int k){
    std::unordered_map<int, int> lookup;
    for(int i=0; i< n; i++){
        lookup[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        if(lookup[arr[i]] == k){
            std::cout<< arr[i] << '\n';
            return;
        }
    }
    std::cout << "1" << '\n';
}

int main(){
    int t, n, *arr,k;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        std::cin >> k;
        arr = new int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr[i];
        }
        check(arr,n,k);
        delete[] arr;
    }
}
