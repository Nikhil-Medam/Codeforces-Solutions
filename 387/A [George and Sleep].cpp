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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int t1=0,t2=0;
    t1=(((int)s1[0]-48)*10+((int)s1[1]-48))*60+((int)s1[3]-48)*10+((int)s1[4]-48);
    t2=(((int)s2[0]-48)*10+((int)s2[1]-48))*60+((int)s2[3]-48)*10+((int)s2[4]-48);    
    t1=t1-t2;
    if(t1<0)
        t1=t1+1440;
    if(t1/60<10&&t1%60<10)
        cout<<0<<t1/60<<":"<<0<<t1%60;
    if(t1/60<10&&t1%60>=10)
        cout<<0<<t1/60<<":"<<t1%60;
    if(t1/60>=10&&t1%60<10)
        cout<<t1/60<<":"<<0<<t1%60;
    if(t1/60>=10&&t1%60>=10)
        cout<<t1/60<<":"<<t1%60;    
    return 0;
}        