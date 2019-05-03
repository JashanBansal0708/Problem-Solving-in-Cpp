#include<iostream>
#include<vector>

void leaders(int arr[], int n){
    std::vector<int> out;
    int max = arr[n-1];
    out.push_back(max);
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= max){
            max = arr[i];
            out.push_back(max);
        }
    }
    for(int i=out.size()-1; i>-1; i--){
        std::cout << out[i] << " ";
    }
    std::cout << '\n';
}

int main(){
    int *arr,t,n;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        arr= new int[n];
        for(int i=0; i< n; i++){
            std::cin >> arr[i];
        }
        leaders(arr,n);
        delete[] arr;
    }
    return 0;
}
