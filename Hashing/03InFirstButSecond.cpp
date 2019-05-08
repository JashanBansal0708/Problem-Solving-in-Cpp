
#include<iostream>
#include<unordered_map>

void check( long long int *arr1, long long int *arr2, int n1, int n2){
    std::unordered_map<long long int,long long int> lookup;
    for(int i=0; i< n2; i++){
        lookup[arr2[i]]++;
    }
    for(int j=0; j<n1; j++){
        if(lookup.find(arr1[j])== lookup.end()){
            std::cout<<arr1[j] << " ";
        }
    }
    std::cout << '\n';
}

int main(){
    long long int t, *arr1, *arr2;
    int n,m;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        std::cin >> m;
        arr1 = new long long int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr1[i];
        }
        arr2 = new long long int[m];
        for(int i=0; i<m; i++){
            std::cin >> arr2[i];
        }
        check(arr1,arr2,n,m);
        delete[] arr1;
        delete[] arr2;
    }
}
