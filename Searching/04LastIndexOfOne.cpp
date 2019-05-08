#include<iostream>

void lastIndex(std::string str){
    for(int i=str.size(); i>-1 ;i--){
        if(str[i] == '1'){
            std::cout << i << '\n';
            return;
        }
    }
    std::cout << "-1" << '\n';
}


int main(){
    int t;
    std::cin >> t;
    std::string str;
    while(t--){
        std::cin >> str;
        lastIndex(str);
    }
    return 0;
}
