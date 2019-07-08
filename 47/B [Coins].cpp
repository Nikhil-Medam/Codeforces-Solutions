#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    char c;
    if(s1[1]!='>')
    {    
        s1[1]='>';
        c=s1[0];
        s1[0]=s1[2];
        s1[2]=c;
    }
    if(s2[1]!='>')
    {    
        s2[1]='>';
        c=s2[0];
        s2[0]=s2[2];
        s2[2]=c;
    }
    if(s3[1]!='>')
    {    
        s3[1]='>';
        c=s3[0];
        s3[0]=s3[2];
        s3[2]=c;
    }
    if(s1[0]!=s2[0]&&s2[0]!=s3[0]&&s1[0]!=s3[0])
        cout<<"Impossible";
    else
    {
        if(s1[2]==s2[2])
            cout<<s1[2]<<s3[2]<<s3[0];
        else if(s1[2]==s3[2])
            cout<<s1[2]<<s2[2]<<s2[0];
        else    
            cout<<s2[2]<<s1[2]<<s1[0];
    }
    return 0;
}