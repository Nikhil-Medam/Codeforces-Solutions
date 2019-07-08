#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,m,a[501][501],b[501][501];
vector<int> v1[1005],v2[1005];
int32_t main()
{
    IOS;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j],v1[i+j].push_back(a[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>b[i][j],v2[i+j].push_back(b[i][j]); 
    for(int i=0;i<n+m-1;i++)
        sort(v1[i].begin(),v1[i].end()),sort(v2[i].begin(),v2[i].end());  
    for(int i=0;i<n+m-1;i++)
        for(int j=0;j<v1[i].size();j++)
            if(v1[i][j]!=v2[i][j])
            {
                cout<<"NO";
                return 0;
            }
    cout<<"YES";                     
    return 0;
}