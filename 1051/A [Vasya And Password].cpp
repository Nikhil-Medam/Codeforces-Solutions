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
void pairsort(ll a[], ll b[], ll n)
{
    pair<ll, ll> pairt[n];
 

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
ll gcd(ll a, ll b)
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
ll fact(ll n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n>=2)
        return n*fact(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[3]={0};
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if((int)s[i]>=65&&(int)s[i]<97)
                a[0]++;
            else if((int)s[i]>=97)
                a[1]++;
            else
                a[2]++;
        }
        if(a[0]==0&&a[1]==0)
        {
            s[0]='A';
            s[1]='b';
        }
        if(a[0]==0&&a[2]==0)
        {
            s[0]='A';
            s[1]='7';
        }
        if(a[2]==0&&a[1]==0)
        {
            s[0]='b';
            s[1]='7';
        }
        if(a[0]==0&&a[1]!=0&&a[2]!=0)
        {
            if(a[1]>1)
            {
                for(int i=0;i<l;i++)
                    if((int)s[i]>=97)
                    {
                        s[i]='A';
                        break;
                    }
            }
            else
            {
                for(int i=0;i<l;i++)
                    if((int)s[i]<65)
                    {
                        s[i]='A';
                        break;
                    }
            }
        }
        if(a[1]==0&&a[0]!=0&&a[2]!=0)
        {
            if(a[0]>1)
            {
                for(int i=0;i<l;i++)
                    if((int)s[i]>=65)
                    {
                        s[i]='a';
                        break;
                    }
            }
            else
            {
                for(int i=0;i<l;i++)
                    if((int)s[i]<65)
                    {
                        s[i]='a';
                        break;
                    }
            }
        }
        if(a[2]==0&&a[1]!=0&&a[0]!=0)
        {
            if(a[0]>1)
            {
                for(int i=0;i<l;i++)
                    if((int)s[i]<97)
                    {
                        s[i]='7';
                        break;
                    }
            }
            else
            {
                for(int i=0;i<l;i++)
                    if((int)s[i]>=97)
                    {
                        s[i]='7';
                        break;
                    }
            }
        }
        cout<<s<<endl;
    }
    
    return 0;
}