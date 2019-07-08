#include <bits/stdc++.h>
using namespace std;
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 
    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
 
    // Sorting the pair array.
    sort(pairt, pairt + n);
     
    // Modifying original arrays
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
    long long n,m;
    cin>>n>>m;
    int a[m],b[m];
    for(int i=0;i<m;i++)
        cin>>a[i]>>b[i];
    pairsort(b,a,m);
    int ans=0;
    for(int i=m-1;i>=0;i--)
    {
        if(a[i]<n)
        {
            n=n-a[i];
            ans=ans+a[i]*b[i];
        }
        else
        {
            ans=ans+n*b[i];
            n=0;
        }
    }
    cout<<ans;
    return 0;
}