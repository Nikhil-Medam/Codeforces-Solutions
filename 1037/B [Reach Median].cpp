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
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int ind=-1;
    for(int i=0;i<n;i++)
        if(a[i]==s)
        {
            ind=i;
            break;
        }
    ll sum=0;
    if(ind==-1)
    {
        ll sum=diff(a[n/2],s);
        a[n/2]=s;
        for(int i=n/2;i>=0;i--)
            if(a[i]>s)
            {
                sum=sum+diff(a[i],s);
                
            }
        for(int i=n/2;i<n;i++)
            if(a[i]<s)
            {
                sum=sum+diff(a[i],s);
                
            }  
        cout<<sum;    
    }
    else if(ind==n/2)
        cout<<sum;
    else if(ind>n/2)
    {
        for(int i=ind-1;i>=n/2;i--)
            sum=sum+diff(a[i],s);
        cout<<sum;    
    }
    else
    {
        for(int i=ind+1;i<=n/2;i++)
            sum=sum+diff(a[i],s);
        cout<<sum;    
    }
    return 0;
}        