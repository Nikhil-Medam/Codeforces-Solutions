#include <bits/stdc++.h>
using namespace std;
void pairsort1(char a[], int b[], int n)
{
    pair<char, int> pairt[n];
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
void pairsort2(int a[], char b[], int n)
{
    pair<int, char> pairt[n];
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
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    char s[n];
    scanf("%s",s);
    if(k>=n)
    {
        printf("\n");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            a[i]=i+1;
        }
        pairsort1(s,a,n);
        for(int i=0;i<k;i++)
        {
            a[i]=-1;
        }
        pairsort2(a,s,n);
        for(int i=0;i<n;i++)
        {
            if(a[i]!=-1)
            {
                printf("%c",s[i]);
            }
        }
    }
    return 0;
}