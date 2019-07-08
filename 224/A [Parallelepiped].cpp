#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    int A,B,C;
    cin>>a>>b>>c;
    A=sqrt(b*c/a);
    B=sqrt(a*c/b);
    C=sqrt(a*b/c);
    cout<<4*(A+B+C);
    return 0;
}        