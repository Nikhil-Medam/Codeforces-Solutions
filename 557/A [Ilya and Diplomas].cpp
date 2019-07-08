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
    int n;
    cin>>n;
    int M1,M2,M3,m1,m2,m3;
    cin>>m1>>M1;
    cin>>m2>>M2;
    cin>>m3>>M3;
    int a[3];
    a[0]=m1;
    a[1]=m2;
    a[2]=m3;
    n=n-m1-m2-m3;
    if(n)
    {
        if(n<M1-m1)
        {
            a[0]=a[0]+n;
        }
        else
        {
            a[0]=a[0]+M1-m1;
            n=n-M1+m1;
            if(n)
            {
                if(n<M2-m2)
                {
                    a[1]=a[1]+n;
                }
                else
                {
                    a[1]=a[1]+M2-m2;
                    n=n-M2+m2;
                    if(n)
                    {
                        a[2]=a[2]+n;
                    }
                }
            }
        }
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2];
    return 0;
}        