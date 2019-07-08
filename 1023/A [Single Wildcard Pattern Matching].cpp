#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    int k=0,ind;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='*')
        {
            k=1;
            ind =i;
            break;
        }
    }
    if(k==1)
    {
        int p=0;
        for(int i=0;i<ind;i++)
        {
            if(s1[i]!=s2[i])
            {
                p=1;
                break;
            }
        }
        int q=m-1;
        for(int i=n-1;i>ind;i--)
        {
            if(s1[i]!=s2[q])
            {
                p=1;
                break;
            }
            q--;
        }
        if(n>m+1)
            p=1;
        if(p==1)
            cout<<"NO";
        else
            cout<<"YES";
    }
    else
    {
        int p=0;
        if(n!=m)
            p=1;
        else
        {
            for(int i=0;i<n;i++)
                if(s1[i]!=s2[i])
                {
                    p=1;
                    break;
                }
        }
        if(n>m+1)
            p=1;
        if(p==1)
            cout<<"NO";
        else
            cout<<"YES";
    }
    return 0;
}        