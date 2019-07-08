#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    string s1="hello";
    int k=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s1[k])
            k++;
        if(k==5)
            break;
    }
    if(k==5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        