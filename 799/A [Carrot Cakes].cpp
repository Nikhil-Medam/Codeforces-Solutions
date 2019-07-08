#include <bits/stdc++.h>
using namespace std;
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
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    if(n-d/t*k<=k)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}