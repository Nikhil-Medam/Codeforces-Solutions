#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<n;i++)
    {
        a[(int)s[i]-97]++;
    }
    int k=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]>=2)
        {
            k=1;
            break;
        }    
    }
    if(n==1)
        k=1;
    if(k==1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}        