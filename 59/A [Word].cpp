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
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int a[l];
    for(int i=0;i<l;i++)
    {
        a[i]=s[i];
    }
    int k=0;
    int lower=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]>=97)
        {
            lower++;
        }
    }
    if(lower>=l/2&&l%2==0)
    {
        k=0;
    }
    else if(lower<=l/2)
    {
        k=1;
    }
    if(k==0)
    {
        for(int i=0;i<l;i++)
        {
            if(a[i]<97)
            {
                a[i]=a[i]+32;
            }
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            if(a[i]>=97)
            {
                a[i]=a[i]-32;
            }
        }
    }
    char s1[l];
    for(int i=0;i<l;i++)
    {
        s1[i]=a[i];
        cout<<s1[i];
    }
    return 0;
}