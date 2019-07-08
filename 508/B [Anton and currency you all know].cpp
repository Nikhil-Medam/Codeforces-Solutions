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
    int d=s.length();
    int a[d];
    for(int i=0;i<d;i++)
        a[i]=(int)s[i]-48;
    int k=0;
    for(int i=0;i<d;i++)
        if(a[i]%2==0)
            k=1;
    if(k==0)
    {
        cout<<-1;
    }
    else if(a[d-1]%2==0)
    {
        int max=0;
        int ind;
        if(a[0]%2==0)
        {
            for(int i=0;i<d;i++)
                if(max>a[i])
                {
                    ind=i;
                    max=a[i];
                }
            swap(a[0],a[ind]);    
        }
        else
        {
            for(int i=0;i<d-1;i++)
                if(max>a[i])
                {
                    ind=i;
                    max=a[i];
                }
            swap(a[0],a[ind]);
        }
    }
    else
    {
        int k1=1;
        int ind;
        for(int i=0;i<d;i++)
            if(a[i]<a[d-1]&&a[i]%2==0)
                k1=0;
        if(k1)
        {
            for(int i=d-2;i>=0;i--)
            {
                if(a[i]%2==0)
                {
                    ind=i;
                    break;
                }
            }
            swap(a[ind],a[d-1]);
        }
        else
        {
            for(int i=0;i<d;i++)
            {
                if(a[i]%2==0&&a[i]<a[d-1])
                {
                    ind=i;
                    break;
                }
            }
            swap(a[ind],a[d-1]);
        }
    }
    for(int i=0;i<d&&k!=0;i++)
        cout<<a[i];
    return 0;
}        