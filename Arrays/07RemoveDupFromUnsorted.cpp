#include<iostream>
#include<unordered_set>

using namespace std;

void removeDuplicates(int arr[], int n){
    unordered_set<int> s;
    for(int i=0; i< n ; i++){
        if(s.find(arr[i]) == s.end()){
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
    cout << '\n';
}

int main(){
    int *arr, t, n;
    cin >> t;
    while(t--){
        cin >> n;
        arr = new int[n];
        for(int i=0; i<n ; i++){
            cin >> arr[i];
        }
        removeDuplicates(arr, n);
    }
}
