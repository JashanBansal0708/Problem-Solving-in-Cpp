// Time complexity o(nlogn)

#include<iostream>
#include<algorithm>

void majority(int arr[], int n){
    std::sort(arr, arr+n);
    if(n%2 == 0){
        for(int i=0; i< n/2; i++){
            if(arr[i] == arr[n/2+i]){
                std::cout << arr[i] << '\n';
                return;
            }
        }
    }
    else{
        for(int i=0; i<= n/2; i++){
            if(arr[i] == arr[n/2+i]){
                std::cout << arr[i] << '\n';
                return;
            }
        }
    }
    std::cout << "-1"<< '\n';
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
