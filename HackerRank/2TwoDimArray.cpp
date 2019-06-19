#include <bits/stdc++.h>

using namespace std;

int hourGlass(int a[6][6]){        // While passing we have to define the size
    int max = INT_MIN;
    int sum = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j< 4; j++){
            sum = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            if(sum > max){
                max = sum;
            }
        }
    }
    return max;
}

int main(){
    int arr[6][6];
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cin >> arr[i][j];
        }
    }    
    cout << hourGlass(arr);
    return 0;
}
