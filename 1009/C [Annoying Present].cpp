#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    int x[m],d[m];
    for(int i=0;i<m;i++)
        cin>>x[i]>>d[i];
    ll sum=0;
    for(int i=0;i<m;i++)
        sum=sum+x[i];
    sum=n*sum;
    for(int i=0;i<m;i++)
    {
        if(d[i]>0)
        {
            sum=sum+n*(n-1)/2*d[i];
        }
        else if(d[i]<0&&n%2==1)
        {
            sum=sum+n/2*(n/2+1)/2*d[i]*2;
        }
        else if(d[i]<0)
        {
            sum=sum+n/2*(n/2-1)/2*d[i]*2+n/2*d[i];
        }
    }
    double avg=(double)sum/n;
    cout << fixed << showpoint;
    cout << setprecision(6);
    cout<<avg;
    return 0;
}