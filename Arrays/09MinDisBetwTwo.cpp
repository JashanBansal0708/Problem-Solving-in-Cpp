#include<iostream>
#include<algorithm>

void dist(int arr[], int n, int c){
    std::sort(arr, arr+n);
    int min = arr[c-1]- arr[0];
    for(int i=c; i< n; i++){
        if((arr[i]- arr[i-c+1]) < min ){
            min = arr[i]- arr[i-c+1];
        }
    }
    std::cout << min << '\n';
}


int main(){
    int *arr;
    int t, n;
    std::cin >> t;
    int c;
    while(t--){
        std::cin >> n;
        arr = new int[n];
        for(int i=0; i< n; i++){
            std::cin >> arr[i];
        }
        std::cin>> c;
        dist(arr,n,c);
        delete[] arr;
    }

}
