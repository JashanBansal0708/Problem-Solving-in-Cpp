#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> arr, int rot){
    int *aux = new int[rot];
    for(int i = arr.size()-rot, j=0; i<arr.size(); i++, j++){
        aux[j] = arr[i];
    }
    for(int i = arr.size()-1; i>rot-1; i--){
        arr[i] = arr[i-rot];
    }
    for(int i=0; i< rot; i++){
        arr[i] = aux[i];
    }
    for(int i=0; i< arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main(){
    int t, n;
    vector<int> arr;
    int rot;
    cin >> t;
    int value;
    while(t--){
        cin >> n;
        cin >> rot;
        for(int i=0; i<n; i++){
            cin >> value;
            arr.push_back(value);
        }
        rotate(arr,arr.size()-rot);
        arr.clear();
    }
    return 0;
}
