#include <bits/stdc++.h>

using namespace std;

int main(){
    long n, m, h = 0, s = 0, a, b, k;
    cin >> n >> m;
    long int *arr=new long int[n]();

    /////////////// Very Important///////////
    ////////////// Failed many times beacuse stack size becomes full //////////////
    for(int i=0; i< m; i++){
        cin >> a >> b >> k;
        arr[a-1] += k;
        if(b < n)
            arr[b] -= k;
    }
    
    for(int i=0; i< n; i++){
        s = s + arr[i];
        if(s > h)
            h = s;
    }
    cout << h;
    delete[] arr;
    return 0;
}
