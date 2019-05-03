#include<iostream>
#include<string.h>

void findDup(std::string str){
    int arr[26] = {0};
    for(int i=0; i< str.size(); i++){
        arr[str[i]-'a']++;
        if(arr[str[i] - 'a'] == 2){
            std::cout << str[i]<< '\n';
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
        std::cin >> str;
        findDup(str);
    }
    return 0;
}

