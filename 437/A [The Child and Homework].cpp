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
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    multimap<int,char> m;
    m.insert(pair <int, char> (s1.length()-2, 'A'));
    m.insert(pair <int, char> (s2.length()-2, 'B'));
    m.insert(pair <int, char> (s3.length()-2, 'C'));
    m.insert(pair <int, char> (s4.length()-2, 'D'));
    map <int, char> :: iterator itr;
    map <int, char> :: iterator itr1;
    int k=0;
    itr=m.begin();
    itr1=m.begin();
    itr1++;
    if(2*(itr->first)<=itr1->first)
    {
        k++;
    }
    itr=m.end();
    itr--;
    itr1=itr;
    itr1--;
    if(itr->first>=2*(itr1->first))
    {
        k--;
    }
    if(k==0)
        cout<<"C";
    if(k==1)
    {
       itr=m.begin(); 
       cout<<itr->second;
    }
    if(k==-1)
    {
        itr=m.end();
        itr--;
        cout<<itr->second;
    }
    return 0;
}        