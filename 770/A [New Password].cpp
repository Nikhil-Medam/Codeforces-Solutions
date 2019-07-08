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
    int n,k;
    cin>>n>>k;
    char b[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(d==k)
            d=0;
        cout<<b[d++];    
    }
    return 0;
}