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
void pairsort(ll a[], ll b[], ll n)
{
    pair<ll, ll> pairt[n];
 

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

int32_t main()
{
    IOS;
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length(),n2=s2.length();
    int a[26]={0},b[26]={0};
    int p=0;
    string temp=s1;
    for(int i=0;i<temp.length();i++)
    {
        if(temp[i]!=s2[p])
        {
            temp.erase(temp.begin()+i);
            i--;
        }
        else
            p++;
    }
    if(temp==s2)
    {
        cout<<"automaton";
        return 0;
    }
    for(int i=0;i<n1;i++)
        a[s1[i]-97]++;
    for(int i=0;i<n2;i++)
        b[s2[i]-97]++;
    int K=0;
    for(int i=0;i<26;i++)
        if(a[i]!=b[i])
            K=1;
    if(K==0)
    {
        cout<<"array";
        return 0;
    }
    int k=0;
    for(int i=0;i<26;i++)
        if(b[i]>a[i])
        {
            cout<<"need tree";
            return 0;
        }
    cout<<"both";    
    return 0;
}