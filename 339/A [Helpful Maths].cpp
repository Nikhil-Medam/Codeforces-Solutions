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
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    int h=n/2+1;
    int a[h];
    int k=0;
    for(int i=0;i<n;i++)
    {
        a[k]=s[i];
        a[k]=a[k]-48;
        i++;
        k++;
    }
    sort(a,a+h);
    cout<<a[0];
    for(int i=1;i<h;i++)
        cout<<"+"<<a[i];
    return 0;
}