// o(nlogn)

#include<iostream>
#include<algorithm>
void common(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
    int flag = 0;
    for(int i=0; i< n1; i++){
        if(std::binary_search(arr2, arr2+n2, arr1[i]) && std::binary_search(arr3, arr3+n3, arr1[i])){
            std::cout << arr1[i] << " ";
            flag = 1;
        }
        while(arr1[i+1] == arr1[i]){
            i++;
        }
    }
    if(!flag){
        std::cout << -1;
    }
    std::cout << '\n';
}


int main(){
    int t;
    int n1, n2, n3;
    int *arr1, *arr2, *arr3;
    std::cin >> t;
    while(t--){
        std::cin >> n1;
        std::cin >> n2;
        std::cin >> n3;
        arr1 = new int[n1];
        arr2 = new int[n2];
        arr3 = new int[n3];
        for(int i=0; i<n1; i++){
            std::cin >> arr1[i];
        }
        for(int i=0; i<n2; i++){
            std::cin >> arr2[i];
        }
        for(int i=0; i<n3; i++){
            std::cin >> arr3[i];
        }
        common(arr1,arr2,arr3, n1,n2,n3);
        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
    }
    return 0;
}
