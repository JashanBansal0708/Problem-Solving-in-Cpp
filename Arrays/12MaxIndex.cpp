#include<iostream>


void maxIndex(int arr[],int n){
    int m = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[i]<= arr[j]){
                if((j-i)>m){
                    m = j-i;
                }
            }
        }
    }
    std::cout << m << '\n';

}

int main(){
    int *arr,t,n;
    std::cin>> t;
    while(t--){
        std::cin >> n;
        arr = new int[n];
        for(int i=0; i<n ; i++){
            std::cin >> arr[i];
        }
        maxIndex(arr,n);
    }
    return 0;
}
