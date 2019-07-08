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
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n')
        {
            if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')
            {
                k=1;
                break;
            }
        }
    }
    if(s[n-1]!='a'&&s[n-1]!='e'&&s[n-1]!='i'&&s[n-1]!='o'&&s[n-1]!='u'&&s[n-1]!='n')
        {
            k=1;
        }
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}