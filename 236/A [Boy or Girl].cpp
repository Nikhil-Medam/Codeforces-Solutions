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
    string s;
    cin>>s;
    int l=s.length();
    int a[l];
    for(int i=0;i<l;i++)
    {
        a[i]=s[i];
    }
    sort(a,a+l);
    int k=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            k++;
        }
    }
    k++;
    if(k%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}