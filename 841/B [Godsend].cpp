#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    long long a[n],k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==1)
            k=1;
    }
    if(k==0)
        cout<<"Second";
    else
        cout<<"First";
}   