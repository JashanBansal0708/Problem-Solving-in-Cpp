#include<bits/stdc++.h>
using namespace std;
unordered_map<string , int> lookup;


int knapsack(int *values, int *weights, int n, int w){
    if(w < 0){
        return INT_MIN;
    }

    if(w==0 || n < 0){
        return 0;
    }

    string key = to_string(n) + "|" + to_string(w);

    if(lookup.find(key) != lookup.end())
        return lookup[key];

    lookup[key] = max(knapsack(values, weights, n-1, w), (knapsack(values, weights,n-1, w-weights[n]) + values[n]));
    return lookup[key];
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
        cout << knapsack(values, weights, n-1, w) << '\n';
        lookup.clear();
    }
    return 0;
}


