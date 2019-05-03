// Function Problem

{
#include <bits/stdc++.h>
using namespace std;
vector<int> threeWayPartition(vector<int> A,
                int lowVal, int highVal);
int main() {

	int t;
	cin>>t;
	while(t--)
	{

		int N;
		cin>>N;
		vector<int> A(N);
		int hash[1000001];
		memset(hash,0,sizeof hash);

		for(int i=0;i<N;i++){
		cin>>A[i];
		hash[A[i]]++;
		}

		int n,m;
		cin>>n>>m;
		vector<int> B(A.size());
		for(int i=0;i<A.size();i++)
		{
			B[i]=A[i];
		}
   int k1=0,k2=0,k3=0;
        int kk1=0;int kk2=0;int kk3=0;
        for(int i=0;i<B.size();i++)
        {
        	if(B[i]>m)
        	{
        		k3++;
        	}else if(B[i]<=m and B[i]>=n)
        	{
        		k2++;
        	}else if(B[i]<m)
        	k1++;
        }

		vector<int> Res = threeWayPartition(A,
                n,m);

      	for(int i=0;i<k1;i++)
      	{
      		if(Res[i]<m)
      		kk1++;
      	}

      	for(int i=k1;i<k1+k2;i++)
      	{

      		if(Res[i]<=m and Res[i]>=n)
      		kk2++;

      	}

      	for(int i=k1+k2;i<k1+k2+k3;i++)
      	{
      		if(Res[i]>m)
      		kk3++;
      	}
      	bool ok = 0;
      	if(k1==kk1 and k2 ==kk2 and k3 == kk3)
      	ok = 1;
	for(int i=0;i<Res.size();i++)
      		hash[Res[i]]--;

      	for(int i=0;i<Res.size();i++)
      	if(hash[Res[i]]!=0)
      	ok=0;

		if(ok)
		cout<<1<<endl;
		else
		cout<<0<<endl;

	}
	// your code goes here
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The function should return the modified array
as specified in the problem statement */
vector<int> threeWayPartition(vector<int> A, int a, int b)
{
     vector<int> retArr;
     int n= A.size();
     for(int i=0; i<n; i++){
         if(A[i] < a){
             retArr.push_back(A[i]);
         }
     }
     for(int i=0; i<n; i++){
         if(A[i] >= a and A[i] <= b){
             retArr.push_back(A[i]);
         }
     }
     for(int i=0; i<n; i++){
         if(A[i] > b){
             retArr.push_back(A[i]);
         }
     }
     return retArr;
}

