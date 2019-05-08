// Function Problem

{
#include<bits/stdc++.h>
using namespace std;
int transitionPoint(int arr[],int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<transitionPoint(a,n)<<endl;
	}
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
int transitionPoint(int arr[],int n)
{
    int left = 0;
    int right = n-1;
    int mid;
    while(left <= right){
        mid = (left + right)/2;
        if(arr[mid] == 1){
            right = mid - 1;
            if(arr[right] == 0){
                return mid;
            }
        }
         else if(arr[mid] == 0){
            left = mid + 1;
            if(arr[left] == 1){
                return left;
            }
        }
    }
    return left;
}
