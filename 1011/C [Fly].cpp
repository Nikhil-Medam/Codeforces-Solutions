#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n],b[n],k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            k=1;
    }    
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]==1)
            k=1;
    }
    if(k==0)
    {
        double f=0,l=m;
    f=f+l/(b[0]-1);
    f=f+(l+f)/(a[n-1]-1);
    for(int i=0;i<n-1;i++)
    {
        f=f+(l+f)/(b[n-1-i]-1);
        f=f+(l+f)/(a[n-2-i]-1);
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    cout<<f<<endl;
    }
    else
        cout<<"-1";
    return 0;
}        
