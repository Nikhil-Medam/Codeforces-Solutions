#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    if(n>=0)
        cout<<n;
    else
    {
        cout<<n/100*10+max((n/10)%10,n%10);
    }
    return 0;
}        