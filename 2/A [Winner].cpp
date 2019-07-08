#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int n,x[1001],m;
map<string,int> M;
string s1[1001];
set<string> s,S;
int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s1[i]>>x[i];
        M[s1[i]]+=x[i];
        s.insert(s1[i]);
    }
    for(auto it=s.begin();it!=s.end();it++)
        m=max(M[*it],m);
    for(auto it=s.begin();it!=s.end();it++)
        if(M[*it]==m)
            S.insert(*it);
    M.clear();    
    for(int i=1;i<=n;i++)
    {
        M[s1[i]]+=x[i];
        if(S.find(s1[i])!=S.end()&&M[s1[i]]>=m)
        {
            cout<<s1[i];
            return 0;
        }
    }
    return 0;
}