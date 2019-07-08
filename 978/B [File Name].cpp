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
    string s;
    cin>>s;
    int k=0;
    for(int i=0;i<n-2;i++)
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
            k++;
    cout<<k;        
    return 0;
}