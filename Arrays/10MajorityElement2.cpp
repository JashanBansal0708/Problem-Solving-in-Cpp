#include<iostream>
#include<unordered_map>

void majority(int arr[], int n){
    std::unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto it = m.begin(); it != m.end(); i++){
        if(it->second > n/2){
            std::cout << arr[i] << '\n';
            return;
        }
    }
    std::cout << "-1" << '\n';
}


int main(){
    int *arr,t, n;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        arr = new int[n];
        for(int i=0; i< n ; i++){
            std::cin >> arr[i];
        }
        majority(arr,n);
        delete[] arr;
    }

}
