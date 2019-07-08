#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[8][8];
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            cin>>s[i][j];
    int p=0,k=0;
    for(int i=0;i<8&&k==0;i++)
    {
        int w=0,b=0;
        k=0;
        for(int j=0;j<7;j++)
            if(s[i][j]==s[i][j+1])
                k=1;
        for(int j=0;j<8;j++)
            if(s[i][j]=='W')
                w++;
            else
                b++;
        if(w!=b)
            k=1;
    }
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        