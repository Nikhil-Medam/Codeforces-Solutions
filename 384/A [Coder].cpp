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
    if(n%2==0)
    {
        cout<<n*n/2<<endl;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                    if(j%2==0)
                        cout<<'C';
                    else
                        cout<<'.';
            }
            else
            {
                for(int j=0;j<n;j++)
                    if(j%2==1)
                        cout<<'C';
                    else
                        cout<<'.';   
            }
            cout<<endl;
        }    
    }
    else
    {
        cout<<n*n/2+1<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                if((i+j)%2==0)
                    cout<<'C';
                else
                    cout<<'.';
            cout<<endl;
        }    
    }
    return 0;
    
}        