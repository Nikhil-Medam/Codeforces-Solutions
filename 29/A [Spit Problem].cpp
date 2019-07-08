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
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int p,q;
        cin>>p>>q;
        m.insert(pair<int,int>(p,q));
    }
    int k=0;
    map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        int p,q;
        p=itr->first;
        q=itr->second;
        map<int,int>::iterator itr1;
        itr1=m.find(p+q);
        if(itr1->first==p+q&&itr1->second==-q)
        {
            k=1;
            break;
        }
    }
    if(k)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        