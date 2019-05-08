// O(n1 + n2 + n3)

#include<iostream>
#include<algorithm>
void common(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
    int flag = 0;
    int i1=0, i2=0, i3=0;
    while(i1 < n1 && i2 < n2 && i3 < n3){
        if(arr1[i1]== arr2[i2] && arr1[i1]== arr3[i3]){
            std::cout << arr1[i1] <<  " ";
            i1++;
            i2++;
            i3++;
            while(arr1[i1+1] == arr1[i1]){
                i1++;
            }
            while(arr2[i2+1] == arr2[i2]){
                i2++;
            }
            while(arr3[i3+1] == arr3[i3]){
                i3++;
            }
            flag = 1;
        }
        else if(arr1[i1] < arr2[i2]){
            i1++;
        }
        else if(arr2[i2] < arr3[i3]){
            i2++;
        }
        else
            i3++;
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
