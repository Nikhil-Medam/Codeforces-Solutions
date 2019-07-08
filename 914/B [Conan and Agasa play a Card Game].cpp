#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n],b[100000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]-1]++;
    }
    int k=1;
    for(int i=0;i<100000;i++)
        if(b[i]%2==1)
        {
            k=0;
            break;
        }
    if(k==1)
        cout<<"Agasa";
    else
        cout<<"Conan";
    return 0;
}   