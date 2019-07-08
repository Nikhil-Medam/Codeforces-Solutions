#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int y,y1;
    cin>>y;
    y1=y;
    int a[4],b[4];
    for(int i=0;i<4;i++)
    {
        a[3-i]=y1%10;
        y1=y1/10;
    }
    int p=0;
    y++;
    while(p==0)
    {
        y1=y;
        for(int i=0;i<4;i++)
        {
            b[3-i]=y1%10;
            y1=y1/10;
        }
        int k=0;
        for(int i=0;i<4;i++)
            for(int j=i+1;j<4;j++)
                if(b[i]==b[j])
                    k=1;
        if(k==0)
            p=1;
        y++;    
    }
    cout<<y-1;
    return 0;
}        