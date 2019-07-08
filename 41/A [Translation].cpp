#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
        cout<<"NO";
    else
    {
        int k=0;
        int n=s1.length();
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[n-1-i])
            {
                k=1;
                break;
            }
        }
        if(k==0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}        
