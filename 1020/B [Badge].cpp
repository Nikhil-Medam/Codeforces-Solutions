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
    int a[n+1],b[n+1]={0};
    for(int i=1;i<n+1;i++)
        cin>>a[i];
    int k=1;
    while(k<n+1)
    {
        b[k]++;
        int q=a[k];
        int d=0;
        while(d==0)
        {
            int p=a[q];
            b[q]++;
            q=p;
            for(int i=1;i<n+1;i++)
                if(b[i]==2)
                {
                    cout<<i<<" ";
                    d=1;
                    break;
                }
        }
        k++;
        for(int i=1;i<n+1;i++)
            b[i]=0;
    }
    return 0;
}        