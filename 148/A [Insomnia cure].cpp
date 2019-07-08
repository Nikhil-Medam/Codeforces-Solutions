#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int a[d+1]={0};
    for(int i=k;i<d+1;i=i+k)
       a[i]=1; 
    for(int i=l;i<d+1;i=i+l)
       a[i]=1; 
    for(int i=m;i<d+1;i=i+m)
       a[i]=1; 
    for(int i=n;i<d+1;i=i+n)
       a[i]=1; 
    int ans=0;  
    for(int i=1;i<d+1;i++)
        if(a[i]==1)
            ans++;
    cout<<ans;        
    return 0;
}        