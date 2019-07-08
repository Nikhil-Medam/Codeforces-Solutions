#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
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
int t,n,m;
string s[2005];
map<char,int> Mt,Mb,Ml,Mr,M;
int32_t main()
{
    IOS;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        Mt.clear(),Mb.clear(),Ml.clear(),Mr.clear(),M.clear();
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(char i='a';i<='z';i++)
            Mt[i]=1e9,Ml[i]=1e9;
        char c='a';
        int pp=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(s[i][j]!='.')
                    pp=1,M[s[i][j]]++,c=max(c,s[i][j]),Mt[s[i][j]]=min(Mt[s[i][j]],j),Mb[s[i][j]]=max(Mb[s[i][j]],j),Ml[s[i][j]]=min(Ml[s[i][j]],i),Mr[s[i][j]]=max(Mr[s[i][j]],i);
        if(!pp)
        {
            cout<<"YES"<<endl<<0<<endl;
            continue;
        }
        int k=0;
        for(char i='a';i<=c;i++)
        {
            if(Mt[i]!=Mb[i]&&Ml[i]!=Mr[i]&&M[i])
                k=1;
            if(!M[i])
                Mt[i]=Mt[c],Mb[i]=Mb[c],Ml[i]=Ml[c],Mr[i]=Mr[c];
        }
        for(char i='a';i<=c;i++)
            for(int j=Ml[i];j<=Mr[i];j++)
                for(int l=Mt[i];l<=Mb[i];l++)
                    if(s[j][l]<i)
                        k=1;
        if(k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl<<(c-'a'+1)<<endl;
        for(char i='a';i<=c;i++)
            cout<<Ml[i]+1<<" "<<Mt[i]+1<<" "<<Mr[i]+1<<" "<<Mb[i]+1<<endl;
    }
    return 0;
}