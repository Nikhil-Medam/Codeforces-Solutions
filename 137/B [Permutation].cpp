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
    int a[n],b[5001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }    
    int e=0,d=0;
    for(int i=1;i<5001;i++)
    {
        if(b[i]==0&&i<=n)
            d++;
        if(b[i]>1&&i<=n)
            e=e+b[i]-1;
        if(i>n)
            e=e+b[i];
    }
    cout<<d;
    return 0;
}        