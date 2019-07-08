#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=2e5+5;
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1||n==2)
        cout<<n;
    else
    {
        int ans=2;
        int b[n];
        b[0]=1;
        b[1]=1;
        for(int i=2;i<n;i++)
        {
            if(a[i]==a[i-1]+a[i-2])
                b[i]=b[i-1]+1;
            else
                b[i]=1;
        }
        for(int i=0;i<n;i++)
            if(b[i]+1>ans)
                ans=b[i]+1;
        cout<<ans;        
    }
    
    return 0;
}        