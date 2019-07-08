#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=(int)s[i];
        if(a[i]>=97)
            a[i]=a[i]-97;
        else 
            a[i]=a[i]-65;
    }
    int b[26]={0};
    for(int i=0;i<n;i++)
        b[a[i]]++;
    int k=0;
    for(int i=0;i<26;i++)    
        if(b[i]==0)
            k=1;
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
}    