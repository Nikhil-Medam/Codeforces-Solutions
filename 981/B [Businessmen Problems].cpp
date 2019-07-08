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
int max(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int n,m;
    cin>>n;
    int a[200000]={0},b[200000]={0};
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    cin>>m;
    for(i=n;i<n+m;i++)
    {
        cin>>a[i]>>b[i];
    }
    pairsort(a,b,n+m);
    long long ans=0;
    for(i=0;i<n+m;i++)
    {
        if(i==n+m-1)
        {
            ans=ans+b[i];
            break;
        }
        if(a[i]==a[i+1])
        {
            ans=ans+max(b[i],b[i+1]);
            i++;
        }
        else
        {
            ans=ans+b[i];
        }
    }
    cout<<ans;
    return 0;
}