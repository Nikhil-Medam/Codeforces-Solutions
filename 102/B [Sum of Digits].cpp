#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int l=s.length();
    int a[l];
    long long sum=0;
    for(int i=0;i<l;i++)
    {
        a[i]=(int)s[i]-48;
        sum=sum+a[i];
    }
    long long d=0,p;
    p=sum;
    int k=0;
    if(l>1)
        k=1;
    while(sum/10>=1)
    {
        d=d+p%10;
        p=p/10;
        if(p==0)
        {
            sum=d;
            p=sum;
            d=0;
            k++;
        }    
    }
    cout<<k;
    return 0;
}