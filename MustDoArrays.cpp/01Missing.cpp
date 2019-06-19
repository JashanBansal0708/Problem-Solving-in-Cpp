#include <bits/stdc++.h>
using namespace std;

void missingEle(int *arr, int n){
    int index;
    for(int i=0; i< n-1 ; i++){
        index = abs(arr[i]);
        arr[index-1] =  -arr[index-1];
    }
    for(int i=0; i< n; i++){
        if(arr[i] > 0){
            cout << i+1 ;
            break;
        }
    }
    cout << '\n';
}

int main()
{
	int t, n, *arr;
	cin >> t;
	while(t--){
	    cin >> n;
	    arr = new int[n];
	    for(int i=0; i< n-1; i++){
	        cin >> arr[i];
	    }
	    arr[n-1] = 1;
	    missingEle(arr, n);
	    delete[] arr;
	}
}
