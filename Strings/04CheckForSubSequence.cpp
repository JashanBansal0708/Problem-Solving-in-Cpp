#include<iostream>
#include<string.h>

void check(std::string str1, std::string str2 ){
    char ch;
    int j=0;
    ch = str1[j++];
    for(int i=0; i< str2.size(); i++){
        if(ch == str2[i]){
            if( j == str1.size()){
                std::cout << "1" << '\n';
                return;
            }
            ch = str1[j++];
        }
    }
    std::cout << "0" << '\n';
}

int main(){
    std::string str1, str2;
    int t;
    std::cin >> t;
    while(t--){
        std::cin >> str1;
        std::cin >> str2;
        check(str1, str2);
    }
    return 0;
}



