#include <bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    if(a<=b)
        return a;
    else 
        return b;
}
int min(int a,int b,int c)
{
    return min(min(a,b),c);
}
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
    int n;
    cin>>n;
    int a[n],b[n];
    int c=0,m=0,p=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            c++;
        else if(a[i]==2)
            m++;
        else
            p++;
        b[i]=i+1;
    }   
    pairsort(a,b,n);
    int x=min(c,m,p);
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            m=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==3)
        {
            p=i;
            break;
        }
    }
    cout<<x<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<b[c++]<<" "<<b[m++]<<" "<<b[p++]<<endl;
    }
    return 0;
}