#include<iostream>


void stock(int arr[], int n ){
    bool buyied = false;
    bool noProfit = true;
    int l, r;
    for(int i=0; i<n-1; i++){
        if(arr[i+1] > arr[i]){
            if(!buyied){
                buyied = true;
                l=i;
            }
        }
        else{
            if(buyied){
                r=i;
                std::cout << "(" << l << " " << r << ") ";
                buyied = false;
                noProfit = false;
            }
        }

    }
    if(buyied){
        r = n-1;
        std::cout<< "(" << l << " " << r << ")" ;
        noProfit = false;
    }
    if(noProfit){
        std::cout << "No Profit";
    }
    std::cout << '\n';
}

int main(){
    int t;
    std::cin >> t;
    int n, *arr;
    while(t--){
        std::cin >> n;
        arr = new int[n];
        for(int i=0; i< n; i++){
            std::cin >> arr[i];
        }
        stock(arr,n);
    }
    return 0;
}
