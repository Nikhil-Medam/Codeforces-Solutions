#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int diff(int a,int b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,s1;
    cin>>s>>s1;
    if((s.length()+s1.length())%2==1)
    {
        int p;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='|')
            {
                p=i;
                break;
            }
        }    
        if(diff(p,s.length()-1-p)>s1.length())
                cout<<"Impossible";
         else
        {
            int D=2*p+1-s.length();
            if(D>0)
            {
                for(int i=0;i<p;i++)
                    cout<<s[i];
                for(int i=0;i<(s1.length()-D)/2;i++)
                    cout<<s1[i];
                cout<<s[p];
                for(int i=(s1.length()-D)/2;i<s1.length();i++)
                    cout<<s1[i];
                for(int i=p+1;i<s.length();i++)
                    cout<<s[i];    
            }
            else
            {
                D=-D;
                for(int i=0;i<p;i++)
                    cout<<s[i];
                for(int i=(s1.length()-D)/2;i<s1.length();i++)
                    cout<<s1[i];    
                cout<<s[p];
                for(int i=0;i<(s1.length()-D)/2;i++)
                    cout<<s1[i];
                for(int i=p+1;i<s.length();i++)
                    cout<<s[i];
            }
        }       
    }
    else
        cout<<"Impossible";
    return 0;
}        
