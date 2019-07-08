#include <bits/stdc++.h>
using namespace std;
long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main()
{
    int n,m,p;
    cin>>n>>m;
    long long min,max;
    p=n%m;
    min=p*C(n/m+1,2);
    if(n/m>1)
    {
        min=min+(m-p)*C(n/m,2);
    }
    max=C(n-m+1,2);
    if(n==m)
    {
        min=0;
        max=0;
    }
    cout<<min<<" "<<max;
    return 0;
}