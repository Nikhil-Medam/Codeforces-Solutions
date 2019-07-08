#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define double long double
#define pb push_back
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define diff(a,b) (a>b?a-b:b-a)
const int N=1e5+5;
void pairsort(int a[], int b[], int n){
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
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int isPrime(int n){
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
    if(r>n-r) 
        r=n-r;
    long long ans=1;
    for(int i=1;i<=r;i++){
        ans*=n-r+i;
        ans/=i;
    }
    return ans;
}
int mod = 1e9+7;
int modexpo(int x,int p){
    int res = 1;
    x = x%mod;
    while(p){
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int n,ind1,ind2=1e9;
string s,s1,s2,sum1,sum2;
int32_t main()
{
    IOS;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(i<=n/2&&s[i]!='0')
            ind1=max(ind1,i);
        if(i>n/2&&s[i]!='0')
            ind2=min(ind2,i);
    }
    string t1,t2,t3,t4;
    for(int i=0;i<n;i++)
    {
        if(i<ind1)
            t1+=s[i];
        else
            t2+=s[i];
    }
    reverse(t1.begin(),t1.end());
    reverse(t2.begin(),t2.end());
    while(t1.size()<t2.size())
        t1+="0";
    while(t2.size()<t1.size())
        t2+="0";
    for(int i=0;i<t1.size();i++)
    {
        if(i+1!=t1.size())
        {
            int x=t1[i]-'0',y=t2[i]-'0';
            x+=y;
            if(x>9)
            {
                t2[i]=(char)(x%10+'0');
                t1[i+1]++;
            }
            else
                t2[i]=(char)((x)+'0');
        }
        else
        {
            int x=t1[i]-'0',y=t2[i]-'0';
            x+=y;
            if(x>9)
            {
                t2[i]=(char)(x%10+'0');
                t2+=(char)(x-10+'0');
            }
            else
                t2[i]=(char)(x+'0');
        }
    }
    t3=t2;
    t1="",t2="";
    for(int i=0;i<n;i++)
    {
        if(i<ind2)
            t1+=s[i];
        else
            t2+=s[i];
    }
    reverse(t1.begin(),t1.end());
    reverse(t2.begin(),t2.end());
    while(t1.size()<t2.size())
        t1+="0";
    while(t2.size()<t1.size())
        t2+="0";
    for(int i=0;i<t1.size();i++)
    {
        if(i+1!=t1.size())
        {
            int x=t1[i]-'0',y=t2[i]-'0';
            x+=y;
            if(x>9)
            {
                t2[i]=(char)(x%10+'0');
                t1[i+1]++;
            }
            else
                t2[i]=(char)((x)+'0');
        }
        else
        {
            int x=t1[i]-'0',y=t2[i]-'0';
            x+=y;
            if(x>9)
            {
                t2[i]=(char)(x%10+'0');
                t2+=(char)(x-10+'0');
            }
            else
                t2[i]=(char)(x+'0');
        }
    }
    t4=t2;
    reverse(t3.begin(),t3.end());
    reverse(t4.begin(),t4.end());
    if(t3.size()<t4.size())
        cout<<t3;
    else if(t4.size()<t3.size())
        cout<<t4;
    else
        cout<<min(t3,t4);
    return 0;
}