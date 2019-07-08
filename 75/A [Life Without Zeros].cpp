#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
ll rev(ll n)
{
    ll ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b,c;
    cin>>a>>b;
    c=a+b;
    ll A=0,B=0,C=0;
    while(a)
    {
        if(a%10!=0)
            A=A*10+a%10;
        a=a/10;
    }
    while(b)
    {
        if(b%10!=0)
            B=B*10+b%10;
        b=b/10;
    }
    while(c)
    {
        if(c%10!=0)    
            C=C*10+c%10;
        c=c/10;
    }
    A=rev(A);
    B=rev(B);
    C=rev(C);
    if(A+B==C)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        