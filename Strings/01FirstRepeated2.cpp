#include<iostream>
#include<string.h>
#include<unordered_map>

void findDup(std::string str){
    std::unordered_map<char, int> lookup;
    std::string::iterator it = str.begin();
    for(; it != str.end(); it++ ){
        lookup[*it]++;
        if(lookup[*it] >1){
            std::cout << *it << '\n';
            return;
        }
    }
    std::cout << -1 << '\n';
}

int main(){
    std::string str;
    int t;
    std::cin >> t;
    while(t--){
        std::cin.ignore();
        std::getline(std::cin,str);
        findDup(str);
    }
    return 0;
}
