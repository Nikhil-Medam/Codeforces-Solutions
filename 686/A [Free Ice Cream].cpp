#include <bits/stdc++.h>
using namespace std;
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
    int n;
    long long x;
    cin>>n>>x;
    int d=0;
    while(n--)
    {
        char c;
        cin>>c;
        if(c=='+')
        {
            int p;
            cin>>p;
            x=x+p;
        }
        else
        {
            int p;
            cin>>p;
            if(x>=p)
                x=x-p;
            else
                d++;
        }
    }
    cout<<x<<" "<<d;
    return 0;
}