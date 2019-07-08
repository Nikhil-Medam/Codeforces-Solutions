#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=(int)s[i]-96;
    sort(a,a+n);
    int b[k];
    int p=1;
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>=b[p-1]+2&&p<k)
        {
            b[p++]=a[i];
        }
        if(p==k)
            break;
    }
    if(p<k)
        cout<<"-1";
    else
    {
        ll sum=0;
        for(int i=0;i<k;i++)
            sum=sum+b[i];
        cout<<sum; 
    }
    return 0;
}        
