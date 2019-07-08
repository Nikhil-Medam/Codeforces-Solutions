//Author: Nikhil_Medam
//Language: C++
//Assignment 6 Question 1
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define diff(a,b) (a>b?a-b:b-a)
const int N=1e5+5;
int A[301][301],vis[301],n;
vector<int> v,v1;
void dfs(int x)
{
	v.push_back(x);
	vis[x]=1;
	for(int i=1;i<=n;i++)
		if(A[x][i]&&!vis[i])
			dfs(i);
}
int32_t main()
{
    IOS;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
    	for(int j=1;j<=n;j++)
    		A[i][j]=s[j-1]-'0';
    }	
    for(int i=1;i<=n;i++)
    {
    	if(!vis[i])
    	{
    		dfs(i);
    		for(int j=0;j<v.size();j++)
    			v1.push_back(a[v[j]]);
    		sort(v1.begin(),v1.end());
    		sort(v.begin(),v.end());
    		for(int j=0;j<v.size();j++)
    			a[v[j]]=v1[j];
    		v.clear();
    		v1.clear();
    	}
    }
    for(int i=1;i<=n;i++)
    	cout<<a[i]<<" ";
    return 0;
}