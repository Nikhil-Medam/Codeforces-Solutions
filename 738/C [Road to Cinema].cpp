#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
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
int A[200005],n,k,s,t;
int BinSearch(int *a)
{
	int low=0,high=n-1,mid,mid1=1e9;
	while(low<=high)
	{
		mid=(low+high+1)/2;
		int s=0,p=0,pos=0;
		for(int i=0;i<k;i++)
		{
			if(A[i]-pos>a[mid])
			{
				p=1;
				break;
			}
			else
				s+=2*(A[i]-pos)-min(A[i]-pos,a[mid]-(A[i]-pos));
			pos=A[i];	
		}
		if(p||s>t)
			low=mid+1;
		else
		{
			mid1=min(mid1,mid);
			high=mid-1;
		}
	}
	return mid1;
}
int32_t main()
{
    IOS;
    cin>>n>>k>>s>>t;
    int c[n],v[n];
    for(int i=0;i<n;i++)
    	cin>>c[i]>>v[i];
    pairsort(v,c,n);
    for(int i=0;i<k;i++)
    	cin>>A[i];
    A[k]=s;
    sort(A,A+k+1);
    k++;
    int ind=BinSearch(v);
    if(ind==1e9)
    {
    	cout<<-1;
    	return 0;
    }
    vector<int> v1;
    for(int i=0;i<n;i++)
        if(v[ind]<=v[i])
            v1.push_back(c[i]);
    int mi=v1[0];
    for(int i=1;i<v1.size();i++)
        mi=min(mi,v1[i]);
    cout<<mi;
    return 0;
}