#include<iostream>
#include<vector>
using namespace std;


void count(vector<int> arr, int c){
    int i=0;
    for( ; arr[i]<=c && i < arr.size(); i++);
    cout << i << '\n';
}


int main(){
    vector<int> arr;
    int t, n;
    cin >> t;
    int each;
    int c;
    while(t--){
         cin >> n;
         for(int i=0; i< n; i++){
            cin >> each;
            arr.push_back(each);
         }
         cin >> c;
         count(arr, c);
         arr.clear();
    }
}
