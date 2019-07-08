#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n)
    {
        if(n>=pow(2,i)&&n<pow(2,i+1))
        {
            n=n-pow(2,i);
            i=0;
            ans++;
        }
        else
            i++;
    }
    cout<<ans;
    return 0;
}        