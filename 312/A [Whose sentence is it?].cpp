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
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

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
int gcd(int a, int b)
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    getline (cin, s);
    for(int j=0;j<n;j++)
    {
        getline (cin, s);
        int k1=0,k2=0;
        int l=s.length();
        if(l>=5&&s[l-5]=='l'&&s[l-4]=='a'&&s[l-3]=='l'&&s[l-2]=='a'&&s[l-1]=='.')
                k1=1;    
        if(l>=5&&s[0]=='m'&&s[1]=='i'&&s[2]=='a'&&s[3]=='o'&&s[4]=='.')
                k2=1;    
        if(k1==1&&k2==0)
            cout<<"Freda's"<<endl;
        else if(k2==1&&k1==0)
            cout<<"Rainbow's"<<endl;
        else
            cout<<"OMG>.< I don't know!"<<endl;    
    }
    return 0;
}        