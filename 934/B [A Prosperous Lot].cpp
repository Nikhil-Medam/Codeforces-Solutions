#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin>>k;
    if(k>36)
        cout<<"-1";
    else
    {
        while(k>=2)
        {
            cout<<"8";
            k=k-2;
        }
        if(k%2==1)
            cout<<4;
    }
    return 0;
}