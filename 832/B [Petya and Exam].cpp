#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define pb push_back
const int N=1e5+5;
int max(int a,int b)
{
	if(a>=b)
		return a;
	else 	
		return b;
}
int min(int a,int b)
{
	if(a<=b)
		return a;
	else 	
		return b;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
void pairsort(int a[], int b[], ll n)
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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int isPrime(int n)
{
    if(n < 2)
        return 0;
    if(n < 4)
        return 1;
    if(n % 2 == 0 or n % 3 == 0)
        return 0;
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 or n % (i+2) == 0)
            return 0;
    return 1;
}
long long C(int n, int r) {
    if(r > n - r) r = n - r;
    long long ans = 1;
    int i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
ll mod = 1e9+7;
ll modexpo(ll x,ll p)
{
    ll res = 1;
    x = x%mod;
    while(p)
    {
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int32_t main()
{
    IOS;
    string t,s;
    cin>>t>>s;
    set<char> us;
    for(int i=0;i<t.length();i++)
        us.insert(t[i]);
    int m,k=0,ind;
    cin>>m;
    for(int i=0;i<s.length();i++)
        if(s[i]=='*')
            k=1,ind=i;
    for(int i=0;i<m;i++)
    {
        string s1;
        cin>>s1;
        if(s1.length()!=s.length()&&!k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(!k)
        {
            vector<int> v;
            int x=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]!='?'&&s1[i]!=s[i])
                    x=1;
                if(s[i]=='?')
                    v.push_back(i);
            }  
            if(x)
            {
                cout<<"NO"<<endl;
                continue;
            }
            for(int i=0;i<v.size();i++)
                if(!us.count(s1[v[i]]))
                    x=1;
            if(x)
            {
                cout<<"NO"<<endl;
                continue;
            }        
            cout<<"YES"<<endl;
        }
        else
        {
            int d=(int)s1.length()-(int)s.length(),x=0;
            if(d<-1)
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(d==-1)
            {
                string l="";
                for(int i=0;i<s.length();i++)
                    if(s[i]!='*')
                        l+=s[i];
                vector<int> v;
                for(int i=0;i<s1.length();i++)
                {
                    if(l[i]!='?'&&s1[i]!=l[i])
                        x=1;
                    if(l[i]=='?')
                        v.push_back(i);
                } 
                for(int i=0;i<v.size();i++)
                    if(!us.count(s1[v[i]]))
                        x=1;
                if(x)
                {
                    cout<<"NO"<<endl;
                    continue;
                }        
                cout<<"YES"<<endl; 
                continue;
            }
            string t="",t1="";
            for(int i=ind;i<=ind+d&&i<s1.length();i++)
            {
                if(us.count(s1[i]))
                    x=1;
                t+=s1[i];
            }    
            for(int i=0;i<ind;i++)
                t1+=s[i];
            t1+=t;    
            for(int i=ind;i<s.length();i++)
                if(s[i]!='*')            
                    t1+=s[i];
            vector<int> v;
            for(int i=0;i<s1.length();i++)
            {
                if(t1[i]!='?'&&s1[i]!=t1[i])
                    x=1;
                if(t1[i]=='?')
                    v.push_back(i);
            } 
            for(int i=0;i<v.size();i++)
                if(!us.count(s1[v[i]]))
                    x=1;
            if(x)
            {
                cout<<"NO"<<endl;
                continue;
            }        
            cout<<"YES"<<endl; 
        }
    }
    return 0;
}