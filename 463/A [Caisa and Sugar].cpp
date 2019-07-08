#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,s;
    cin>>n>>s;
    int k=-1;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p<s&&q!=0)
        {
            if(100-q>k&&q!=0)
                k=100-q;
        }
        else if(p<=s&&q==0)
        {
            if(k<0)
                k=0;
        }
    }
    cout<<k<<endl;
    return 0;
}        