#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    char s[100000];
    scanf("%s",s);
    long long sum=0;
    int l=strlen(s);
    int x;
    for(int i=0;i<l;i++)
    {
        x=s[i];
        sum=sum+a[x-49];
    }
    cout<<sum;
    return 0;
}