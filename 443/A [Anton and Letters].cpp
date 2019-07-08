#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    if(a>=b)
        return a;
    else 
        return b;
}
int main()
{
    char s[1000];
    int a[1000];
    s[0]='{';
    int k=0;
    for(int i=0;s[i-1]!='}';i++)
    {
        scanf("%c",&s[i]);
        if((int)s[i]>=97&&(int)s[i]<=122)
            a[k++]=s[i];
    }
    int n=strlen(s);
    int ans=0;
    sort(a,a+k);
    for(int i=0;i<k;i++)
    {
        if(i==k-1)
        {
            ans++;
            break;
        }
        if(a[i]!=a[i+1])
            ans++;
    }
    cout<<ans;
    return 0;
}