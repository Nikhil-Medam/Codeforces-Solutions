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
    int a[n],b[n]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k=n-1;
    for(int i=0;i<n;i++)
    {
        b[a[i]-1]++;
        while(b[k]==1)
        {
            cout<<k+1<<" ";
            k--;
            if(k==-1)
                break;
        }    
        cout<<endl;    
    }
}