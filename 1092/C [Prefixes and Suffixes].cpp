#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
const int N=1e6+5;
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
void pairsort(string a[], ll b[], ll n)
{
    pair<string, ll> pairt[n];
 

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
void pairsort1(ll a[], char b[], ll n)
{
    pair<ll, char> pairt[n];
 

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
ll fact(ll n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n>=2)
        return n*fact(n-1);
}
int isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;        
}
int solve(int n,int m)
{   
        
}
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    string s[2*n-2];
    for(int i=0;i<2*n-2;i++)
        cin>>s[i];
    string s1="",s2,t1,t2;
    for(int i=0;i<2*n-2;i++)
    {
        if(s1==""&&s[i].length()==n-1)
        {
            s1=s[i];
            t1=s[i];
        }    
        else if(s[i].length()==n-1)
        {
            s2=s[i];
            t2=s[i];
        }    
    }
    s1+=s2[n-2];
    s2+=s1[n-2];
    for(int i=0;i<n-1;i++)
        if(t2[i]!=s1[i+1])
            s1=s2;
    string pf1[n-1],pf2[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(i==0)
        {
            string temp="";
            for(int j=0;j<i+1;j++)
                temp+=s1[j];
            pf1[i]=temp;
        }
        else
            pf1[i]=pf1[i-1]+s1[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(i==0)
        {
            string temp="";
            for(int j=0;j<i+1;j++)
                temp+=s2[j];
            pf2[i]=temp;
        }
        else
            pf2[i]=pf2[i-1]+s2[i];
    }
    string ans1="",ans2=""; 
    for(int i=0;i<2*n-2;i++)
    {
        int p=0;
        for(int j=0;j<n-1;j++)
        {
            if(s[i]==pf1[j])
            {
                ans1+="P";
                pf1[j]="";
                p=1;
                break;
            }
        }
        if(p==0)
            ans1+="S";
    }
    for(int i=0;i<2*n-2;i++)
    {
        int p=0;
        for(int j=0;j<n-1;j++)
        {
            if(s[i]==pf2[j])
            {
                ans2+="P";
                pf2[j]="";
                p=1;
                break;
            }
        }
        if(p==0)
            ans2+="S";
    }
    int k=0;
    for(int i=0;i<ans1.length();i++)
        if(ans1[i]=='P')
            k++;
    if(k==n-1)
        cout<<ans1;
    else
        cout<<ans2;
    return 0;
}