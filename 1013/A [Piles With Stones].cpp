#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int diff(int a,int b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n],b[n];
    ll s=0,S=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        S=S+a[i];
    }    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        s=s+b[i];
    }
    if(S>=s)
        cout<<"YES";
    else
        cout<<"NO";
        
    return 0;
}        
