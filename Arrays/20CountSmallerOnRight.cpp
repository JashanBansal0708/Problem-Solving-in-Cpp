#include<iostream>

void countSmaller(int *arr, int n){
	int *smallers = new int[n];
	std::fill(smallers, smallers + n, 0);
	for(int i=n-1; i>-1; i--){
       for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                smallers[i]++;
            }
       }
	}
	for(int i=0; i < n; i++){
        std::cout << smallers[i] << " " ;
	}
	std::cout << '\n';
}


int main(){
    int *arr,t,n;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        arr= new int[n];
        for(int i=0; i< n; i++){
            std::cin >> arr[i];
        }
        countSmaller(arr,n);
        delete[] arr;
    }
    return 0;
}

