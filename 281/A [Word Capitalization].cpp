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
    char s[1000];
    scanf("%s",s);
    int l=strlen(s);
    int a=s[0];
    if(a>=97)
    {
        a=a-32;
    }
    char b;
    b=a;
    cout<<b;
    for(int i=1;i<l;i++)
    {
        cout<<s[i];
    }
    return 0;
}