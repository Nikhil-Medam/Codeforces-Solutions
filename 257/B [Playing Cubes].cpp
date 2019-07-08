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
int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int p,v;
    v=min(n,m);
    p=v+max(n,m)-min(n,m)-1;
    cout<<p<<" "<<v;
    return 0;
}