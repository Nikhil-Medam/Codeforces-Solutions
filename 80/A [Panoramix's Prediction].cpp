#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int CheckPrime(int n)
{
    for(int i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int k=0;
    for(int i=n+1;i<m;i++)
    {
        if(CheckPrime(i))
        {
            k=1;
            break;
        }
    }
    if(!CheckPrime(m))
        k=1;
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
}        
