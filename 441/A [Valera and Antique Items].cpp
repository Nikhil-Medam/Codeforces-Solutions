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
    set <int> s;
    set <int> :: iterator itr;
    int n,v;
    cin>>n>>v;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        int a[p];
        for(int j=0;j<p;j++)
        {
            cin>>a[j];
            if(a[j]<v)
                s.insert(i+1);
        }
    }
    cout<<s.size()<<endl;
    for(itr=s.begin();itr!=s.end();itr++)
        cout<<*itr<<" ";
    return 0;
}        