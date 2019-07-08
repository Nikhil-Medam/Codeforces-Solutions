#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++)
    {    
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }   
    cout<<max;
    return 0;
}