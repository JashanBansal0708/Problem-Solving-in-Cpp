#include<bits/stdc++.h>
using namespace std;
int coin[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

int calc(int v,int i){
    if(n==0){
        return 0;
    }
    else if(i==0){
        return INT_MAX;
    }
    return min(1+ calc(v-coin[i-1], i), calc(v, i-1));
}

int main(){
    int t, v;
    cin >> t;
    while(t--){
        cin >> v;
        cout << calc(v, 10) << '\n';
    }
    return 0;
}
