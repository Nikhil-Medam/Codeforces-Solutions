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
    string s1,s2;
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(i==0)
        {
            s1=s;
            p++;
        }    
        else
        {
            if(s1==s)
                p++;
            else
            {
                s2=s;
                q++;
            }
        }
    }
    if(p>q)
        cout<<s1;
    else
        cout<<s2;
    return 0;
}        
