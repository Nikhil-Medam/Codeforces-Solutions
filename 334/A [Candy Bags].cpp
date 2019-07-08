#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=pow(n,2)/2;i++)
        cout<<i<<" "<<pow(n,2)+1-i<<endl;
    return 0;
}        