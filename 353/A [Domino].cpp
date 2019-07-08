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
    int a[n],b[n];
    ll su=0,sl=0,k=0;
    for(int i=0;i<n;i++)    
    {
        cin>>a[i]>>b[i];
        if(a[i]%2!=b[i]%2)
            k++;
        su=su+a[i];
        sl=sl+b[i];
    }    
    if(su%2!=sl%2)
        cout<<-1;
    else
    {
        if(su%2==0&&sl%2==0)
            cout<<0;
        else if(n==1&&su%2==1&&sl%2==1)
            cout<<-1;
        else if(su%2==1&&sl%2==1&&k==0)
            cout<<-1;
        else
            cout<<1;
    }
    return 0;
}        