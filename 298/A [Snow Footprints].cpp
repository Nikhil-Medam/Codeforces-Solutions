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
    string s;
    cin>>s;
    int l=0,r=0,L,R,k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            l++;
            if(k==0)
            {
                L=i;
                k=1;
            }    
        }    
        if(s[i]=='R')
        {
            r++;
            R=i;
        }    
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!='.')
            k=i;
    }
    if(l==0)
    {
        cout<<k+1<<" "<<R+2;
    }
    else if(r==0)
    {
        cout<<k+1<<" "<<L;
    }
    else
    {
        cout<<k+1<<" "<<R+2;
    }
    return 0;
}        