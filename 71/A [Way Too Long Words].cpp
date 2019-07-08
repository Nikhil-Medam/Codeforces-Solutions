#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        int p=s.length();
        if(p<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s.substr(0,1)<<p-2<<s.substr(p-1,p-1)<<endl;
        }
    }
    return 0;
}