#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-')
            i++;
        else
            a[i]=(int)s[i]-48;
    }
    unsigned long long b=0;
    long long c=0;
    int k=0;
    if(a[0]==0)
        a[0]=-1;
    if(a[0]==-1&&s.length()>=21)
    {
        cout<<"BigInteger";
        k=5;
    }    
    if(a[0]!=-1&&s.length()>=20)
    {
        cout<<"BigInteger";
        k=5;
    }    
    if(a[0]!=-1&&n==19)
    {
        
        for(int i=0;i<n;i++)
        {
            b=b*10+a[i];
            c=c*10+a[i];
        }
        if((b+c)/b==2)
            k=4;
        else
            {
            cout<<"BigInteger";
            k=5;
            }
    }
    if(a[0]==-1&&n==20)
    {
        for(int i=0;i<n;i++)
        {
            b=b*10+a[i];
            c=c*10+a[i];
        }
        if((b+c)/b==2)
            k=4;
        else if(c==9223372036854775808)
        {
            k=4;
        }
        else
            {
            cout<<"BigInteger";
            k=5;
            }
    }
    if(k==0)
    {
        for(int i=0;i<n;i++)
        {
            c=c*10+a[i];
        }
    }
    if(k==0)
    {
         if(c<=127&&c>=-128)
            k=1;
        else if(c<=32767&&c>=-32768)
            k=2;
        else if(c<=2147483647&&c>=-2147483648)
            k=3;
        else 
            k=4;
    }
    if(k==1)
        cout<<"byte";
    else if(k==2)
        cout<<"short";
    else if(k==3)
        cout<<"int";
    else if(k==4)
        cout<<"long";
    return 0;
}