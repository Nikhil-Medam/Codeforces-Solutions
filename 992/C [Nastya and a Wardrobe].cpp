#include <bits/stdc++.h>
using namespace std;
long long power(long long x, long long y, long long p)
{
    long long res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}
int main() 
{
	long long x,k;
	long long d=1000000007;
	cin>>x>>k;
	long long ans;
	if(x==0)
	{
	    ans=0;
	}
	else
	{
	    ans=((power(2,k+1,d)*((x-1)%d))%d+power(2,k,d)+1)%d;   
	}
	cout<<ans;
	return 0;
}