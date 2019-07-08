#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int d,n;
        cin>>d;
        double n1;
        if(d<60)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            n=360/(180-d);
            n1=(double)360/(180-d);
            if(n==n1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }        
    }
    return 0;
}        