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
    int a[n],b[n],A[n],B[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        A[i]=a[i];
        B[i]=b[i];
    }
    int M=a[0],m=b[0],k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>M)
            M=a[i];
        if(b[i]<m)
            m=b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==M&&b[i]==m)
            k=1;
    }
    pairsort(a,b,n);
    pairsort(B,A,n);
    ll ans=max(B[0]-a[n-2],B[1]-a[n-1]);
    if(k==1)
        ans=B[1]-a[n-2];
    if(ans<0)
        ans=0;
    cout<<ans;
    return 0;
}        