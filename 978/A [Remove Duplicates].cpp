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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=-1)
        {
            for(int j=i-1;j>=0;j--)
                if(a[i]==a[j])
                    a[j]=-1;
        }
    }
    int k=0;
    for(int i=0;i<n;i++)
        if(a[i]!=-1)
            k++;
    cout<<k<<endl;
    for(int i=0;i<n;i++)
        if(a[i]!=-1)
            cout<<a[i]<<" ";
    return 0;
}