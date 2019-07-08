#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll l,r;
    cin>>l>>r;
    if(r-l>2)
    {
        if(l%2==0)
            cout<<l<<" "<<l+1<<" "<<l+2;
        else
            cout<<l+1<<" "<<l+2<<" "<<l+3;
    }
    else if(r-l==2)
    {
        if(l%2==0)
            cout<<l<<" "<<l+1<<" "<<l+2;
        else
            cout<<"-1";
    }
    else
        cout<<"-1";
    return 0;
}        
