#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        char c;
        int n;
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y')
        {
            n=(int)s[i];
            if(n<97)
                n=n+32;
            c=(char)n;
            cout<<"."<<c;
        }
    }
}        
