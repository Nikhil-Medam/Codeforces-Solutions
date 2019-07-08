#include <bits/stdc++.h>
using namespace std;
int mod(int a,int b)
{
    if(b>=a)
    {
        if(b-a<=13)
        {
            return b-a;
        }
        else
        {
            return 26+a-b;
        }
    }
    else
    {
        if(a-b<=13)
        {
            return a-b;
        }
        else
        {
            return 26+b-a;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int l=s.length();
    int a[l];
    for(int i=0;i<l;i++)
        a[i]=s[i];
    int ans=mod(a[0],97);
    for(int i=0;i<l-1;i++)
    {
        ans=ans+mod(a[i],a[i+1]);
    }    
    cout<<ans;
    return 0;
}