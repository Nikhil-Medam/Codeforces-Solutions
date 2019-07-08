#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    int i=0;
    while(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+3;
        }
    for(i;i<n;i++)
    {
        int k=0;
        while(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+3;
            k++;
        }
        if(k!=0)
            cout<<" ";
        if(i<n)
            cout<<s[i];
    }
    return 0;
}        
