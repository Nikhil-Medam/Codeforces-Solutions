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
    long long n,k;
    cin>>n>>k;
    long long ans;
    long long d=1000000007;
    long long a,b,c;
    a=pow(k,k-1);
    b=(n-k)%d;
    c=power(b,b,d);
    ans=((a%d)*(c%d))%d;
    cout<<ans;
    return 0;
}