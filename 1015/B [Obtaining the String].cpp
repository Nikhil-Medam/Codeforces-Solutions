#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s,s1,t,S,T;
    cin>>s>>t;
    s1=s;
    S=s;
    T=t;
    sort(S.begin(),S.begin()+n);
    sort(T.begin(),T.begin()+n);
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(S[i]!=T[i])
        {
            x=1;
            break;
        }
    }
    int ans=0;
    for(int i=0;i<n&&x==0;i++)
    {
        if(t[i]!=s[i])
        {
            int k;
            for(int j=i+1;j<n;j++)
                if(s[j]==t[i])
                {
                    k=j;
                    break;
                }
            for(int j=k;j>i;j--)
            {
                swap(s[j],s[j-1]);
                ans++;
            }
        }
    }
    if(x==1)
        cout<<"-1";
    else
    {
        cout<<ans<<endl;
        for(int i=0;i<n&&x==0;i++)
    {
        if(t[i]!=s1[i])
        {
            int k;
            for(int j=i+1;j<n;j++)
                if(s1[j]==t[i])
                {
                    k=j;
                    break;
                }
            for(int j=k;j>i;j--)
            {
                swap(s1[j],s1[j-1]);
                cout<<j<<" ";
            }
        }
    }
    }    
    return 0;
}        
