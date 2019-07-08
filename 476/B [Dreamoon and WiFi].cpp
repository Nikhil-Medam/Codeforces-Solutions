#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll  diff(ll a,ll b)
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
int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int a[2]={0},b[3]={0};
    for(int i=0;i<n;i++)
        if(s1[i]=='+')
            a[0]++;
        else
            a[1]++;
    for(int i=0;i<n;i++)
    {
        if(s2[i]=='+')
            b[0]++;
        else if(s2[i]=='-')
            b[1]++;
        else
            b[2]++;
    }
    double ans=0;
    int A,B;
    A=a[0]-a[1];
    B=b[0]-b[1];
    std::cout << std::fixed;
    std::cout << std::setprecision(9);
    int min,max;
    min=b[2]%2;
    max=b[2];
    if(b[2]==0)
    {
        if(A==B)
            cout<<ans+1;
        else
            cout<<ans;
    }
    else if(diff(A,B)>max||diff(A,B)<min)
        cout<<ans;
    else
    {
        int k=diff(A,B);
        ans=nCr(b[2],((b[2]+k)/2));
        ans=ans/pow(2,b[2]);
        cout<<ans;
    }
    return 0;
}        