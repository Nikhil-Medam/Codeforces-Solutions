#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long n,k;
	scanf("%lld%lld",&n,&k);
	for(int i=0;i<k;i++)
	{
	    if(n%10==0)
	    {
	        n=n/10;
	    }
	    else
	    {
	        n--;
	    }
	}
	printf("%lld",n);
	return 0;
}