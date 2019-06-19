
#include<bits/stdc++.h>
using namespace std;

int knapsack(int *values, int *weights, int n, int w){
        int k[n+1][w+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j <= w; j++){
                if(j==0 || i==0)
                    k[i][j] = 0;
                else if(j >= weights[i-1]){
                    k[i][j] = max(k[i-1][j], values[i-1]+ k[i-1][j-weights[i-1]]);
                }
                else{
                    k[i][j] = k[i-1][j];
                }
            }
        }
        return k[n][w];
}

int main(){
    int t,n,w,res;
    cin >> t;
    while(t--){
        cin >> n >> w;
        int values[n];
        int weights[n];
        for(int i=0; i< n; i++)
            cin >> values[i];
        for(int i=0; i< n; i++)
            cin >> weights[i];
        res = knapsack(values, weights, n, w);
        cout << res << '\n';
    }
    return 0;
}

