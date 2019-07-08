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
    string s;
    cin>>s;
    int k;
    cin>>k;
    int max=0,ind;
    int a[26];
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            ind=i;
        }    
    }
    ll ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans=ans+a[(int)(s[i]-97)]*(i+1);
    }
    for(int i=s.length();i<s.length()+k;i++)
        ans=ans+a[ind]*(i+1);
    cout<<ans;
    return 0;
}        