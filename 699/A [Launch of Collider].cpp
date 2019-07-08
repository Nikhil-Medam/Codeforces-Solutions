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
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k=0;
    for(int i=0;i<n-1;i++)
        if(s[i]=='R'&&s[i+1]=='L')
        {
            k=1;
            break;
        }   
    if(k==0)
        cout<<"-1";
    else
    {
        ll ans=1000000000;
        for(int i=0;i<n-1;i++)
        if(s[i]=='R'&&s[i+1]=='L')
        {
            if((a[i+1]-a[i])/2<ans)
                ans=(a[i+1]-a[i])/2;
        }
        cout<<ans;
    }
    return 0;
}        
