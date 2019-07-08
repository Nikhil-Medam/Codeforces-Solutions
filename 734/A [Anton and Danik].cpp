#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s;
    cin>>n;
    cin>>s;
    int a=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
    }
    if(n%2==0&&a==n/2)
    {
        cout<<"Friendship";
    }
    else if(a<=n/2)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Anton";
    }
    return 0;
}