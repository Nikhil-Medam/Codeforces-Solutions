#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,x;
map<int,int> M;
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	M[x]++;
    }
    auto it=M.begin();
    if((M.begin())->second>n/2)
    	cout<<"Bob";
    else
    	cout<<"Alice";
    return 0;
}