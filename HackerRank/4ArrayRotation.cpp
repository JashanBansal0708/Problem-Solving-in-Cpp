#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, rot;
    cin >> n;
    cin >> rot;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    rot = rot%n;
    int temp[rot];

    // Right Rotation
    // for(int i=n-rot, j=0; i<n; i++, j++){
    //     temp[j] = arr[i];
    // }
    // for(int i = rot; i < n; i++){
    //     arr[i] = arr[i-rot];
    // }
    // for(int i=0; i< rot; i++){
    //     arr[i] = temp[i];
    // }
    // for(int i=0; i< n; i++){
    //     cout << arr[i] << " " ;
    // }
    for(int i=0; i<rot; i++){
        temp[i] = arr[i];
    }
    for(int i = rot; i < n; i++){
        arr[i - rot] = arr[i];
    }
    for(int i= n-rot , j=0; i< n; i++, j++){
        arr[i] = temp[j];
    }
    for(int i=0; i< n; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}