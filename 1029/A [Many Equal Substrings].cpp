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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    int k=0,p=1;
    while(k==0)
    {
        k=1;
        for(int i=0;i<n-p;i++)
        {
            if(s[i]!=s[i+p])   
            {
                p++;
                k=0;
                break;
            }
        }
        if(p==n)
            break;
    }
    cout<<s;
    t--;
    while(t--)
    {
        for(int i=n-p;i<n;i++)
            cout<<s[i];
    }
    
    return 0;
}        