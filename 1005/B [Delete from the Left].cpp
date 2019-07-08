#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int l1=s1.length(),l2=s2.length();
    int k=0,l=min(l1,l2);
    for(int i=0;i<l;i++)
    {
        if(s1[l1-i-1]==s2[l2-i-1])
            k++;
        else
            break;
    }
    cout<<s1.length()+s2.length()-2*k;
    return 0;
}