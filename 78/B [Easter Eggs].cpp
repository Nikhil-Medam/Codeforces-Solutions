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
    cout<<"VIBGYOR";
    n=n-7;
    for(int i=0;i<n/4;i++)
        cout<<"GYOR";
    string s="GYOR";
    cout<<s.substr(0,n%4);
    return 0;
}        