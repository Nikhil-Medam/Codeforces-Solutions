#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n;
    n=s.length();
    int k=1;
    int a[26]={0};
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            a[(int)s[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]%2==1)
            {
                k=0;
                break;
            }
        }
    }
    if(k==0&&n%2==0)
        cout<<"Second";
    else
        cout<<"First";
}   