#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    if(m>2*n+2||m<n-1)
        cout<<"-1";
    else
    {
        int a[2*n-1]={0},k=m;
        for(int i=1;i<2*n-1;i=i+2)
        {
            a[i]=1;
            k--;
        }
        if(k>0)
        {
            cout<<"1";
            k--;
        }
        if(k>0)
        {
            cout<<"1";
            k--;
        }
        for(int i=0;i<2*n-1;i++)
        {
            cout<<a[i];
            if(k>0&&i%2==1)
            {
                cout<<"1";
                k--;
            }
        }
        if(k>0)
        {
            cout<<"1";
            k--;
        }
        if(k>0)
        {
            cout<<"1";
            k--;
        }
    }
    return 0;
}