#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
    sort(pairt, pairt + n);
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    pairsort(x,y,n);
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]>=s)
        {
            k=1;
            break;
        }
        else
        {
            s=s+y[i];
        }
    }
    if(k==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}        