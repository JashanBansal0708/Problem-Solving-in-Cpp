#include<iostream>
#include<string.h>

void findDup(std::string str){
    int arr[26] = {0};
    for(int i=0; i< str.size(); i++){
        arr[str[i]-'a']++;
    }
    char ch;
    for(int i= 25; i>-1; i--){
        while(arr[i]--){
            ch = i + 'a';
            std::cout << ch;
        }
    }
    std::cout << '\n';
}

int main(){
    std::string str;
    int t;
    std::cin >> t;
    while(t--){
        std::cin >> str;
        findDup(str);
    }
    return 0;
}

