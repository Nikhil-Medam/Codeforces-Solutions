#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int n=s.length();
    string s1={"1111111"},s2={"0000000"};
    int k=0;
    for(int i=0;i<n-6;i++)
    {
        k=0;
        for(int j=0;j<7;j++)
        {
            if(s[i+j]!=s1[j])
            {
                k=1;
                break;
            }    
        }
        if(k==0)
        {
            break;
        }
    }
    if(k!=0)
    {
        for(int i=0;i<n-6;i++)
        {
            k=0;
            for(int j=0;j<7;j++)
            {
                if(s[i+j]!=s2[j])
                {
                    k=1;
                    break;
                }          
            }
            if(k==0)
            {
                break;
            }
        }
    }
    if(n<7)
        k=1;
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        