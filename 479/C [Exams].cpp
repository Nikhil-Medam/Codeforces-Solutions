// Sort an array according to 
// other using pair in STL.
#include <bits/stdc++.h>
using namespace std;
 
// Function to sort character array b[]
// according to the order defined by a[]
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
 
// Driver function
int main()
{
    int n;
    cin>>n;
    int a[n]; 
    int b[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    // Function calling
    pairsort(a, b, n);
    int ans;
    ans=b[0];
    for(int i=1;i<n;i++)
    {
        if(b[i]>=ans)
        {
            ans=b[i];
        }
        else
        {
            ans=a[i];
        }
    }
    cout<<ans;
    return 0;
}