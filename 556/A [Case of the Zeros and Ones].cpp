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
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            p++;
        else
            q++;
    }
    if(p>=q)
        cout<<p-q;
    else
        cout<<q-p;
    return 0;
}        
