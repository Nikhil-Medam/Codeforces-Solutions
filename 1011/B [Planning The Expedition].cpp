#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[m],b[101]={0};
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    if(n<=m)
    {
        int ans=m/n;
        int tot=0;
        while(tot<n)
        {
            tot=0;
            for(int i=1;i<101;i++)
            {
                tot=tot+b[i]/ans;
            }
            if(tot>=n)
                break;
            else
                ans--;
        }
    cout<<ans;    
    }
    else
        cout<<"0";
    return 0;
}        
