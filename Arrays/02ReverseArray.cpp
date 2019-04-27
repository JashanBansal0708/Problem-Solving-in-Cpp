#include<iostream>
#include<stack>
using namespace std;

void reverse(int arr[], int n){
    stack<int> stk;
    for(int i=0; i< n; i++){
        stk.push(arr[i]);
    }
    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << '\n';
}

int main(){
    int t, n, *arr;
    cin >> t;
    while(t--){
        cin >> n;
        arr = new int[n];
        for(int i=0; i<n ; i++){
            cin >> arr[i];
        }
        reverse(arr,n);
    }
    return 0;
}
