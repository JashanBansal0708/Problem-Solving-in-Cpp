#include<iostream>

void findPair(int arr[],int n, int sum){
    int i=0;
    int j= n-1;
    int output = 0;
    while(i<j){
        if(arr[i] + arr[j] == sum){
            std::cout << arr[i] << " " << arr[j] << " " << sum << '\n';
            output = 1;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] > sum)
            j--;
        else
            i++;
    }
    if(output) return;
    std::cout << "-1" << '\n;

}

int main(){
    int *arr,t,n;
    std::cin>> t;
    int sum;
    while(t--){
        std::cin >> n;
        arr = new int[n];
        for(int i=0; i<n ; i++){
            std::cin >> arr[i];
        }
        std::cin >> sum;
        findPair(arr,n, sum);
    }
}
