#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle 
        // itself
        if (arr[mid] == x)  
            return mid;
 
        // If element is smaller than mid, then 
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        b[i]=a[i]&x;
    int k=0;
    for(int i=0;i<n-1;i++)
        if(a[i]==a[i+1])
        {
            k=1;
            break;
        }
    if(k==1)
        cout<<"0";
    else
    {
        int t;
        for(int i=0;i<n;i++)
        {
            t=binarySearch(a, 0, n-1, b[i]);
            if(t!=-1&&t!=i)
            {
                k=1;
                break;
            }
        }
        if(k==1)
            cout<<"1";
        else
        {
            sort(b,b+n);
            for(int i=0;i<n-1;i++)
            {
                if(b[i]==b[i+1])
                {
                    k=2;
                    break;
                }
            }
            if(k==2)
                cout<<"2";
            else
                cout<<"-1";
        }
    }
        
    return 0;
}        
