#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int min(int a,int b,int c)
{
    return min(min(a,b),c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int A,B,C;
    A=k*l/nl;
    B=c*d;
    C=p/np;
    cout<<min(A,B,C)/n;
    return 0;
}        