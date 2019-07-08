#include<bits/stdc++.h>
using namespace std;
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
int x,a[6]={4,8,15,16,23,42},f=720;
vector<int> v,v1;
int32_t main()
{   
    cout<<"? "<<1<<" "<<2<<endl;
    cin>>x;
    v.push_back(x);
    cout<<"? "<<2<<" "<<3<<endl;
    cin>>x;
    v.push_back(x);
    cout<<"? "<<3<<" "<<4<<endl;
    cin>>x;
    v.push_back(x);
    cout<<"? "<<4<<" "<<5<<endl;
    cin>>x;
    v.push_back(x);
    while(f--)
    {
    	int x=0;
    	vector<int> v1;
    	v1.push_back(a[0]*a[1]);
    	v1.push_back(a[1]*a[2]);
    	v1.push_back(a[2]*a[3]);
    	v1.push_back(a[3]*a[4]);
    	for(int i=0;i<v.size();i++)
    		if(v1[i]!=v[i])
    			x=1;
    	if(!x)
    	{
    		cout<<"! ";
    		for(int i=0;i<6;i++)
    			cout<<a[i]<<" ";
    		return 0;
    	}	
    	next_permutation(a,a+6);
    }
    return 0;
}