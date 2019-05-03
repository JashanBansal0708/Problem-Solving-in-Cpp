#include<iostream>
#include<string.h>

void findDup(std::string str1, std::string str2 ){
    int arr[26] = {0};
    int arr2[26] = {0};
    char ch = 'a';
    for(int i=0; i< str1.size(); i++){
        arr[str1[i]-'a']++;
    }
    for(int i=0; i< str2.size(); i++){
        arr2[str2[i]-'a']++;
    }
    for(int i=0; i< 26; i++){
        if((arr[i]!=0 && arr2[i]==0) || (arr[i]==0 && arr2[i]!=0)){
            ch = 'a' + i;
            std::cout << ch;
        }
    }
    std::cout << '\n';
}

int main(){
    std::string str1, str2;
    int t;
    std::cin >> t;
    while(t--){
        std::cin >> str1;
        std::cin >> str2;
        findDup(str1, str2);
    }
    return 0;
}



