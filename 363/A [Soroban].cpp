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
    ll n;
    cin>>n;
    int a[10];
    for(int i=0;i<10;i++)
        a[i]=-1;
    for(int i=0;n>=0;i++)
    {
        a[i]=n%10;
        n=n/10;
        if(n==0)
            break;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]!=-1)
        {
            if(a[i]>=5)
                cout<<"-O|";
            else
                cout<<"O-|";
            for(int j=0;j<a[i]%5;j++)
                cout<<"O";
            cout<<"-";    
            for(int j=0;j<4-a[i]%5;j++)
                cout<<"O";
            cout<<endl;    
        }
    }
    return 0;
}        