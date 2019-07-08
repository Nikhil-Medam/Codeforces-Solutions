#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    int a[k],b[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i]>>b[i];
    }
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans=0;
        int k1=0;
        for(int i=0;i<k;i++)
        {
            if(x==a[i]&&y==b[i])
            {
                k1=1;
                break;
            }
        }
        if(k1==0)
        {
            for(int i=0;i<k;i++)
            {
                if(a[i]<x)
                    ans++;
                else if(a[i]==x&&b[i]<y)
                    ans++;
            }
            ans=(x-1)*m+y-ans;
            if(ans%3==1)
                cout<<"Carrots"<<endl;
            else if(ans%3==2)
                cout<<"Kiwis"<<endl;
            else
                cout<<"Grapes"<<endl;
        }
        else
            cout<<"Waste"<<endl;
    }
    return 0;
}        