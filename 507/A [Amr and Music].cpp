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
    int n,k;
    cin>>n>>k;
    multimap<int,int> m;
    for(int i=1;i<n+1;i++)
    {
        int p;
        cin>>p;
        m.insert(pair<int,int>(p,i));
    }            
    multimap<int,int> :: iterator itr;
    ll s=0,p=0;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(s+itr->first<=k)
        {
            s=s+itr->first;
            p++;
        }    
    }
    cout<<p<<endl;
    s=0;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(s+itr->first<=k)
        {
            s=s+itr->first;
            cout<<itr->second<<" ";
        }    
    }
    return 0;
}        