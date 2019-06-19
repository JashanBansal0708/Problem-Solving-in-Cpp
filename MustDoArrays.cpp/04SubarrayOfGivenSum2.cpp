#include<bits/stdc++.h>
using namespace std;


void findSub(int arr[], int n, int s1)
{
    int s = arr[0], start = 0, i;
    for (i = 1; i <= n; i++)
    {
        while (s > s1 && start < i )
        {
            s = s - arr[start];
            start++;
        }
        if (s == s1)
        {
            cout << start+1 << " " << i << '\n';
            return ;
        }
        if (i < n)
          s = s + arr[i];
    }
    cout << "-1" << '\n';
}


int main(){
    int t, n, sum;
    int *arr;
    cin >> t;
    while(t--){
        cin >> n >> sum;
        arr = new int[n];
        for(int i=0; i< n; i++){
            cin >> arr[i];
        }
        findSub(arr, n, sum);
        delete[] arr;
    }
    return 0;
}

