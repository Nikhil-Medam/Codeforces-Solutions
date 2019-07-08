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
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            k=1;
    }
    if(k==1)
        cout<<"rated";
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
                k=1;
        }
        if(k==1)
            cout<<"unrated";
        else
            cout<<"maybe";
    }
}    