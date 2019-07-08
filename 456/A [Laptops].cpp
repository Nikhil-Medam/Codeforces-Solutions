#include<bits/stdc++.h>
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
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int k=0;
    pairsort(a,b,n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1]&&b[i]>b[i+1])
        {
            k=1;
            break;
        }
    }
    if(k==1)
        cout<<"Happy Alex";
    else
        cout<<"Poor Alex";
    return 0;
}        