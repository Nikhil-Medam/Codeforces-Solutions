#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    if(a>=b)
        return a;
    else 
        return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    int num=7-max(a,b),den=6;
    if(num%2==0)
    {
        num=num/2;
        den=den/2;
    }
    if(num%3==0)
    {
        num=num/3;
        den=den/3;
    }
    cout<<num<<"/"<<den;
    return 0;
}