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
    int a[n]={0};
    int p,q;
    cin>>p;
    int b[p];
    for(int i=0;i<p;i++)
    {
        cin>>b[i];
        a[b[i]-1]++;
    }   
    cin>>q;
    int c[q];
    for(int i=0;i<q;i++)
    {
        cin>>c[i];
        a[c[i]-1]++;
    }
    int k=0;
    for(int i=0;i<n;i++)
        if(a[i]==0)
            k=1;
    if(k==0)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}    