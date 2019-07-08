#include <bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int a[s1.length()];
    int b[s2.length()];
    for(int i=0;i<s1.length();i++)
    {
        a[i]=s1[i];
        if(a[i]>=97)
        {
            a[i]=a[i]-32;
        }
    }
    for(int i=0;i<s2.length();i++)
    {
        b[i]=s2[i];
        if(b[i]>=97)
        {
            b[i]=b[i]-32;
        }
    }
    int k=0;
    for(int i=0;i<min(s1.length(),s2.length());i++)
    {
        if(a[i]>b[i])
        {
            k=1;
            break;
        }
        if(b[i]>a[i])
        {
            k=-1;
            break;
        }
    }
    if(k==0)
    {
        if(s1.length()<s2.length())
        {
            k=-1;
        }
        else if(s1.length()>s2.length())
        {
            k=1;
        }
    }
    cout<<k;
    return 0;
}