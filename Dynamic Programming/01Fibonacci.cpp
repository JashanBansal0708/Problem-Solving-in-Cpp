#include<iostream>
//#include<unoredered_map>

//unordered_map<int, int> lookup;

int fib(int n){
    if(n <= 2){
        std::cout << "1 ";
        return 1;
    }
    else{
        int res = fib(n-1) + fib(n-2);
        std::cout << res << " ";
    }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        fib(n);
    }

}
