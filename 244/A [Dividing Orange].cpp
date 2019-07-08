#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n*k+1]={0},b[k]={0};
    for(int i=0;i<k;i++)
    {
        int p;
        cin>>p;
        b[i]=p;
        a[p]=1;
    }
    for(int i=0;i<k;i++)
    {
        cout<<b[i]<<" ";
        int n1=n-1;
        int p=1;
        while(n1)
        {
            if(a[p]==0)
            {
                cout<<p<<" ";
                a[p]=1;
                n1--;
            }
            p++;
        }
        cout<<endl;
    }
    return 0;
}        