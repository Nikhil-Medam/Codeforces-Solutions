#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <int> v;
    int n,k,x;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }    
    sort(v.begin(),v.end());
    int p=1,ans=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]==v[i-1])
            p++;
        else
        {
            if(v[i]>v[i-1]&&v[i]<=v[i-1]+k)
                ans=ans+p;
            p=1;
        }
    }
    cout<<n-ans+1;
    return 0;
}