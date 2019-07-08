#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int k=0;
    int l=s2.length();
    for(int i=0;i<l;i++)
    {
        if(s2[i]==s1[k])
            k++;
    }
    cout<<k+1;
}