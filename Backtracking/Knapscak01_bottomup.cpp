#include<bits/stdc++.h>
using namespace std;
int *values, *weights;


int knapsack(int n, int w){
        int **k = new int*[n+1];
        int res = 0;
        for(int i=0; i< n+1 ; i++){
            k[i] = new int[w+1];
        }
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
        res =  k[n][w];
        for(int i=0; i< n+1; i++){
            delete[] k[i];
        }
        delete[] k;
        return res;
}

int main(){
    int t,n,w,res;
    cin >> t;
    while(t--){
        cin >> n >> w;
        values = new int[n];
        weights = new int[n];
        for(int i=0; i< n; i++)
            cin >> values[i];
        for(int i=0; i< n; i++)
            cin >> weights[i];
        res = knapsack(n, w);
        cout << res << '\n';
        delete[] weights;
        delete[] values;
        //lookup.clear();
    }
    return 0;
}

