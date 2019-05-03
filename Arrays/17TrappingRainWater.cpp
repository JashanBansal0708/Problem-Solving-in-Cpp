#include<iostream>

void trapWater(int arr[], int n){
    int maxLeft[n], maxRight[n] ;
    int mxL, mxR;
    mxL = arr[0];
    mxR = arr[n-1];
    for(int i=0; i< n; i++){
        if(arr[i] >= mxL){
            maxLeft[i] = arr[i];
            mxL = arr[i];
        }
        else{
            maxLeft[i]= mxL;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(arr[i] >= mxR){
            maxRight[i] = arr[i];
            mxR = arr[i];
        }
        else{
            maxRight[i]= mxR;
        }
    }
    int trapWater = 0;
    for(int i=0; i<n; i++){
        trapWater += std::max(std::min(maxLeft[i], maxRight[i])-arr[i], 0);
    }
    std::cout<< trapWater << '\n';

}


int main(){
    int t;
    int *arr, n;
    std::cin >> t;
    while(t--){
        std:: cin >> n;
        arr = new int[n];
        for(int i=0; i<n; i++){
            std::cin >> arr[i];
        }
        trapWater(arr,n);
    }
    return 0;
}
