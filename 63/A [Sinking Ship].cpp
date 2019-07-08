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
    int n;
    cin>>n;
    string s1[n],s2[n],s3[n],s4[n];
    int k1=0,k2=0,k3=0,k4=0;
    for(int i=0;i<n;i++)
    {
        string s,S;
        cin>>s>>S;
        if(S=="rat")
            s1[k1++]=s;
        if(S=="woman"||S=="child")
            s2[k2++]=s;
        if(S=="man")
            s3[k3++]=s;
        if(S=="captain")
            s4[k4++]=s;    
    }
    for(int i=0;i<k1;i++)
        cout<<s1[i]<<endl;
    for(int i=0;i<k2;i++)
        cout<<s2[i]<<endl;
    for(int i=0;i<k3;i++)
        cout<<s3[i]<<endl;
    for(int i=0;i<k4;i++)
        cout<<s4[i]<<endl;    
    return 0;
}        