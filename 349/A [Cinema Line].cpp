#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n],b[3]={0},k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==25)
            b[0]++;
        if(a[i]==50)
        {
            b[1]++;
            if(b[0]>=1)
                b[0]--;
            else
            {
                k=1;
                break;
            }
        }
        if(a[i]==100)
        {
            b[2]++;
            if(b[0]>=1&&b[1]>=1)
            {
                b[0]--;
                b[1]--;
            }
            else if(b[0]>=3)
            {
                b[0]=b[0]-3;
            }
            else
            {
                k=1;
                break;
            }
        }
    }
    if(k==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}        