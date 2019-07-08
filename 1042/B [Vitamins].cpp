#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(ll a[], string b[], ll n)
{
    pair<ll, string> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
ll rev(ll n)
{
    ll ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
ll isComposite(ll n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 1;
    return 0;        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],b[3]={0};
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>s[i];
        sort(s[i].begin(),s[i].end());
    }
    pairsort(a,s,n);
    ll A=999999999,B=999999999,C=999999999,AB=999999999,BC=999999999,AC=999999999,ABC=999999999;
    for(int i=n-1;i>=0;i--)
    {
        if (s[i].find('A') != std::string::npos)
            b[0]=1;
        if (s[i].find('B') != std::string::npos)
            b[1]=1;
        if (s[i].find('C') != std::string::npos)
            b[2]=1;    
        if(s[i]=="ABC")
            ABC=a[i];
        if(s[i]=="AB")
            AB=a[i];
        if(s[i]=="BC")
            BC=a[i];
        if(s[i]=="AC")
            AC=a[i];
        if(s[i]=="A")
            A=a[i];
        if(s[i]=="B")
            B=a[i];
        if(s[i]=="C")
            C=a[i];    
    }
    int p=0;
    if(b[0]!=0&&b[1]!=0&&b[2]!=0)
        p=1;
    A=min(min(A,ABC),min(AB,AC));
    B=min(min(B,ABC),min(AB,BC));
    C=min(min(C,ABC),min(BC,AC));
    AB=min(min(AB,A+B),min(ABC,AC+BC));
    AC=min(min(AC,A+C),min(ABC,AB+BC));
    BC=min(min(BC,B+C),min(ABC,AB+AC));
    ABC=min(min(ABC,AB+C),min(AC+B,BC+A));
    if(p)
        cout<<ABC;
    else
        cout<<-1;
    return 0;
}        