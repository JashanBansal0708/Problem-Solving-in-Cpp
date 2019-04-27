#include<iostream>
#include<vector>
using namespace std;

void count(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() -1;
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(key == arr[mid]){
            while(mid+1<arr.size() && arr[mid+1] == key){
                mid++;
            }
            cout << mid+1<< '\n';
            return ;
        }
        else if(key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    int i=0;
    for(; i<arr.size() && key > arr[i] ; i++);
    cout << i<< '\n';
}

int main(){
    int t, n;
    vector<int> arr;
    cin >> t;
    int value;
    int key;
    while(t--){
        cin >> n;
        for(int i=0; i< n; i++){
            cin >> value;
            arr.push_back(value);
        }
        cin >> key;
        count(arr,key);
        arr.clear();
    }
}
