#include <bits/stdc++.h>
using namespace std;
int n;
int a[100],x=0;
void GetDivisors(int n)
{
    for(int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            {
                a[x++]=i;
            }
 
            else 
            {
                a[x++]=i;
                a[x++]=n/i;
            }
        }
    }
}
void rev(char s[], int x)
{
    char b[n];
    for(int i=0;i<x;i++)
    {
        b[i]=s[i];
    }
    for(int i=0;i<x;i++)
    {
        s[i]=b[x-i-1];
    }
}
int main()
{
    scanf("%d",&n);
    char t[n];
    scanf("%s",t);
    GetDivisors(n);
    sort(a,a+x);
    for(int i=0;i<x;i++)
    {
        rev(t,a[i]);
    }
    printf("%s",t);
    return 0;
}