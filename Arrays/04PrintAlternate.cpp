#include<ostream>
using namespace std;
int main(){
    int t, n, *arr;
    cin >> t;
    while(t--){
        cin >> n;
        arr = new int[n];
        for(int i=0; i < n; i++){
            cin >> arr[i];
        }
        for(int j=0; j<n; j+= 2){
            cout << arr[j];
        }
        cout << '\n';
        delete[] arr;
    }
    return 0;
}

