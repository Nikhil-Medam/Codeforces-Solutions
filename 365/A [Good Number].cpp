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
    int ans=0;
    while(n--)
    {
        string s;
        cin>>s;
        int p=0;
        for(int i=0;i<=k;i++)
        {
            p=0;
            for(int j=0;j<s.length();j++)
                if((int)s[j]-48==i)
                {
                    p=1;
                    break;
                }
            if(p==0)
                break;
        }
        if(p==1)
            ans++;
    }
    cout<<ans;
    return 0;
}        
