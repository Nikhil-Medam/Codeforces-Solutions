#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int k=0;
    for(int i=0;i<=x-a;i++)
        for(int j=0;j<=y-b;j++)
        {
            if(a+i>b+j)
                k++;
        }
    cout<<k<<endl;    
    for(int i=0;i<=x-a;i++)
    {
        for(int j=0;j<=y-b;j++)
        {
            if(a+i>b+j)
                cout<<a+i<<" "<<b+j<<endl;
        }
    }  
    
    return 0;
}        