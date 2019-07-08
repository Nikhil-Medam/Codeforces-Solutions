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
    int a[n];
    int f=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==5)
            f++;
        else
            z++;
    }
    if(f==n)
        cout<<-1;
    else
    {
        for(int i=0;i<f/9;i++)
            cout<<555555555;
        if(f/9!=0)
        {
            for(int i=0;i<z;i++)
                cout<<0;
        }
        else
            cout<<0;
        
    }
    return 0;
}        