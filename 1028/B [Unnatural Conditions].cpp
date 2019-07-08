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
    int n,m;
    cin>>n>>m;
    if(m>=2*n)
    {
        for(int i=0;i<m/2;i++)
            cout<<1;
        cout<<endl;
        for(int i=0;i<m-m/2;i++)
            cout<<1;
    }
    else
    {
        int a[2500]={0},b[2500]={0};
        ll s=0;
        int i=0;
        while(s<n)
        {
            if(i%2==0)
            {
                a[i]=5;
            }
            else
            {
                a[i]=4;
            }
            s=s+a[i];
            i++;
        }
        a[i-1]=5;
        s=0;
        i=0;
        while(s<n)
        {
            if(i%2==0)
            {
                b[i]=4;
            }
            else
            {
                b[i]=5;
            }
            s=s+b[i];
            i++;
        }
        b[i-1]=5;
        for(int i=0;i<2500;i++)
            if(a[i]!=0)
                cout<<a[i];
        cout<<endl;   
        for(int i=0;i<2500;i++)
            if(b[i]!=0)
                cout<<b[i];
    }
    if(n==1)
    return 0;
}        