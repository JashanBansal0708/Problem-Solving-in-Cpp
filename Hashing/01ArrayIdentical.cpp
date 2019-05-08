#include<iostream>
#include<unordered_map>

void check(long long int *arr1, long long int *arr2, int n){
    std::unordered_map<int, int> lookup;
    for(int i=0; i< n; i++){
        lookup[arr1[i]]++;
    }
    int j=0;
    for(; j<n; j++){
        if((lookup[arr2[j]]) && (lookup.find(arr2[j])!= lookup.end()) ){
            lookup[arr2[j]]--;
        }
        else{
            break;
        }
    }
    (j==n) ? std::cout << "1" << '\n': std::cout << "0" << '\n';
}

int main(){
    long long int t, n, *arr1, *arr2;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        arr1 = new long long int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr1[i];
        }
        arr2 = new long long int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr2[i];
        }
        check(arr1,arr2,n);
        delete[] arr1;
        delete[] arr2;
    }
}
