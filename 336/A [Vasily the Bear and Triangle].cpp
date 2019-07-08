#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int mod(int a)
{
    if(a<0)
        return -a;
    else
        return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y;
    cin>>x>>y;
    int p=mod(x)+mod(y);
    if(x>=0&&y>=0)
    {
        cout<<0<<" "<<p<<" "<<p<<" "<<0;
    }
    else if(x<=0&&y>=0)
    {
        cout<<-p<<" "<<0<<" "<<0<<" "<<p;
    }
    else if(x<=0&&y<=0)
    {
        cout<<-p<<" "<<0<<" "<<0<<" "<<-p;
    }
    else
    {
        cout<<0<<" "<<-p<<" "<<p<<" "<<0;
    }
    return 0;
}        