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
const int N = 105;
int a[N],b[N];
bool vis[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k, i, rem, cur = 0, lead = 0;
    cin >> n >> k;
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < k; i++)
    {
        int mod = n - i;
        rem = a[i] % mod;
        int j = lead;
        int count = rem;
        while(count--)
        {
            j = (j+1) % n;
            if(vis[j])
            {
                count++;
                continue;
            }
        }
        vis[j] = 1;
        cout << j+1 << ' ';
        while(vis[(++j)%n]);
        lead = (j) % n;
    }
    
    return 0;
}        