#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// function to search an element in
// minimum number of comparisons
ll search(ll arr[], ll n, ll x)
{
    // 1st comparison
    if (arr[n - 1] == x)
        return n-1;
 
    ll backup = arr[n - 1];
    arr[n - 1] = x;
 
    // no termination condition and thus
    // no comparison
    for (ll i = 0;; i++) {
        // this would be executed at-most n times
        // and therefore at-most n comparisons
        if (arr[i] == x) {
            // replace arr[n-1] with its actual element
            // as in original 'arr[]'
            arr[n - 1] = backup;
 
            // if 'x' is found before the '(n-1)th'
            // index, then it is present in the array
            // final comparison
            if (i < n - 1)
                return i;
 
            // else not present in the array
            return -1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n];
    ll m=k;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }    
    sort(a,a+n);
    ll sum=0;
    int t=k;
    for(ll i=n-1;k>0;i--)
    {
        sum=sum+a[i];
        k--;
    }
    cout<<sum<<endl;
    ll c[m];
    ll p=0,q=0;
    for(ll i=n-m;i<n;i++)
    {
        c[p++]=search(b, n, a[i])+1;
        b[c[p-1]-1]=-1;
    }
    ll s=0;
    sort(c,c+m);
    for(ll i=0;i<m-1;i++)
    {
        
        if(i==0)
        {
            cout<<c[0]<<" ";
            s=s+c[0];
        }    
        else   
        {
            cout<<c[i]-c[i-1]<<" ";
            s=s+c[i]-c[i-1];
        }    
    }
    cout<<n-s;
    return 0;
}