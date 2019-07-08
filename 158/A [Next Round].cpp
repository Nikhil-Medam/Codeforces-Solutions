#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int p=0;
    for(int i=0;i<k;i++)
        if(a[i]>0)
            p++;
    while(a[p]==a[p-1]&&a[p]!=0)
        p++;
    cout<<p;    
}