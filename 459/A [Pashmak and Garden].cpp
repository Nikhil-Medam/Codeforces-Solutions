#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=2e5+5;
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        cout<<x1+diff(y1,y2)<<" "<<y1<<" "<<x1+diff(y1,y2)<<" "<<y2;
    }
    else if(y1==y2)
    {
        cout<<x1<<" "<<y1+diff(x1,x2)<<" "<<x2<<" "<<y1+diff(x1,x2);;
    }
    else if(x1!=x2&&y1!=y2&&diff(x1,x2)==diff(y1,y2))
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;    
    }
    else
    {
        cout<<-1;
    }
    return 0;
}        