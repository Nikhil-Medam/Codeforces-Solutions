#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int sum,A,B,C,D;
    sum=(r1+r2+c1+c2+d1+d2);
    int SUM=sum;
    if(sum%3==0)
        sum=(r1+r2+c1+c2+d1+d2)/3;
    A=d1+r1+c1-sum;
    A=A/2;
    B=r1+d2+c2-sum;
    B=B/2;
    C=c1+d2+r2-sum;
    C=C/2;
    D=d1+r2+c2-sum;
    D=D/2;
    if(SUM%3==0&&A+B+C+D==sum&&A!=B&&A!=C&&A!=D&&B!=C&&B!=D&&C!=D&&A<10&&B<10&&C<10&&D<10&&A>0&&B>0&&C>0&&D>0)
    {
        cout<<A<<" "<<B<<endl;
        cout<<C<<" "<<D<<endl;
    }
    else
        cout<<"-1";
    return 0;
}        
