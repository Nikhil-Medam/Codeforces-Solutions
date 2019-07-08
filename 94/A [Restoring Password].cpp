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
    int a[8];
    string s;
    cin>>s;
    string s1[10];
    for(int i=0;i<10;i++)
        cin>>s1[i];
    for(int i=0;i<s.length();i=i+10)
    {
        for(int j=0;j<10;j++)
        {
            int k=0;
            for(int k1=0;k1<10;k1++)
                if(s1[j][k1]!=s[i+k1])
                    k=1;
            if(k==0)
                a[i/10]=j;
        }        
    }
    for(int i=0;i<8;i++)
        cout<<a[i];
    
    return 0;
}        