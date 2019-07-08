#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k=0;
    int n,m;
    cin>>n>>m;
    char a[n*m];
    for(int i=0;i<n*m;i++)
    {
        cin>>a[i];
        if(a[i]=='C'||a[i]=='M'||a[i]=='Y')
            k=1;
    }
    if(k==0)
        cout<<"#Black&White";
    else
        cout<<"#Color";
    return 0;
}        
