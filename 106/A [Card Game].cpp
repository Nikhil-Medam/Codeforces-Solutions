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
    char c;
    cin>>c;
    string s1,s2;
    char s[9]={'6','7','8','9','T','J','Q','K','A'};
    cin>>s1>>s2;
    int ind1,ind2;
    if(s1[1]==s2[1])
    {
        for(int i=0;i<9;i++)
            if(s[i]==s1[0])
                ind1=i;
        for(int i=0;i<9;i++)
            if(s[i]==s2[0])
                ind2=i;
        if(ind1>ind2)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
        if(s1[1]==c)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}        