#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    long long l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
        if(a[i]==a[i-1])
            a[i-1]=-1;
    sort(a,a+n);
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
            k++;
        else
            break;
    }
    int b[n-k];
    int x=0;
    for(int i=k;i<n;i++)
        b[x++]=a[i];
    double r=0.0;
    for(int i=1;i<n-k;i++)
        if((b[i]-b[i-1])/(double)2>r)
            r=(b[i]-b[i-1])/(double)2;
    if(b[0]>r)
        r=(double)b[0];
    if(l-b[n-k-1]>r)
        r=(double)l-(double)b[n-k-1];
    cout << fixed << setprecision(9) << r << endl;
    return 0;
}