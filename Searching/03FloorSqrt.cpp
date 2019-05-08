// Function Problem

{
#include<stdio.h>
long long int floorSqrt(long long int x);

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		printf("%lld
",floorSqrt(n));
	}
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete
this function*/
long long int floorSqrt(long long int x)
{
    int i;
    for(i=0; i*i <=x; i++);
    return i-1;
}
