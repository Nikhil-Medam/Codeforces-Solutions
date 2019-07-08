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
    int a[n],odd=0;
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
        if(a[i]%2==1)
            odd++;
    }
    int even=n-odd;
    if(s%2==0)
        cout<<even;
    else
        cout<<odd;
    return 0;
}        