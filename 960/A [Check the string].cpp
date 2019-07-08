#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k=0;
    string s;
    cin>>s;
    int n=s.length();
    int a[26]={0};
    for(int i=0;i<n;i++)
        a[(int)s[i]-97]++;
    for(int i=0;i<26;i++)
    {
        if(i<3)
        {
            if(a[i]==0)
                k=1;
        }        
        else
        {
            if(a[i]!=0)
                k=1;
        }        
    }
    if(k==0)
    {
        if(a[0]!=a[2]&&a[1]!=a[2])
            k=1;
    }
    int A,B1,B2,C;
    for(int i=0;i<n;i++)
        if(s[i]=='a')
            A=i;
    for(int i=n-1;i>=0;i--)
        if(s[i]=='b')
            B1=i;    
    for(int i=0;i<n;i++)
        if(s[i]=='b')
            B2=i;  
    for(int i=n-1;i>=0;i--)
        if(s[i]=='c')
            C=i;     
    if(A>B1)
        k=1;
    if(B2>C)
        k=1;
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        