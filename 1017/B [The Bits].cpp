#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll a[n],b[n],c[4]={0};
    for(int i=0;i<n;i++)
    {
        a[i]=(int)s1[i]-48;
        b[i]=(int)s2[i]-48;
    }    
    for(int i=0;i<n;i++)
    {
        if(a[i]==0&&b[i]==0)
            c[0]++;
        if(a[i]==0&&b[i]==1)
            c[1]++;
        if(a[i]==1&&b[i]==0)
            c[2]++;  
        if(a[i]==1&&b[i]==1)
            c[3]++;    
    }   
    ll ans=0;
    ans=c[0]*c[2]+c[0]*c[3]+c[1]*c[2];
    cout<<ans;
    return 0;
}        