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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll s1=0,s2=0;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());
    int k1=0,k2=0;
    for(int i=0;i<2*n;i++)
    {
        if(i%2==0)
        {
            if(k1!=n)
            {
                if(k2!=n)
                {
                    if(a[k1]>=b[k2])
                    {
                        s1=s1+a[k1];
                        k1++;
                    }
                    else
                        k2++;
                }
                else
                {
                    s1=s1+a[k1];
                        k1++;
                }
            }
            else
            {
                k2++;
            }
        }
        else
        {
            if(k2!=n)
            {
                if(k1!=n)
                {
                    if(b[k2]>=a[k1])
                    {
                        s2=s2+b[k2];
                        k2++;
                    }
                    else
                        k1++;
                }
                else
                {
                    s2=s2+b[k2];
                        k2++;
                }
            }
            else
            {
                k1++;
            }
        }
    }
    cout<<s1-s2;
    return 0;
}        