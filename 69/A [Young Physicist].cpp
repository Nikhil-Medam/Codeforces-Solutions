#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[3]={0};
    while(n--)
    {
        int p,q,r;
        cin>>p>>q>>r;
        a[0]=a[0]+p;
        a[1]=a[1]+q;
        a[2]=a[2]+r;
    }
    if(a[0]==0&&a[1]==0&&a[2]==0)
        cout<<"YES";
    else
        cout<<"NO";
}    