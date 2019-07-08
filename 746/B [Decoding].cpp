#include <bits/stdc++.h>
using namespace std;
void pairsort(int a[], char b[], int n)
{
    pair<int, char> pairt[n];
 
    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
 
    // Sorting the pair array.
    sort(pairt, pairt + n);
     
    // Modifying original arrays
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int main()
{
    int n;
    cin>>n;
    char s[n];
    scanf("%s",s);
    int a[n];
    if(n%2==1)
    {
        a[0]=n/2;
        int k=1;
        for(int i=1;i<=n/2;i++)
        {
            a[k++]=n/2-i;
            a[k++]=n/2+i;
        }
        pairsort(a,s,n);
        printf("%s",s);
    }
    else
    {
        n=n-2;
        a[0]=n/2;
        a[1]=n/2+1;
        n=n+2;
        for(int i=2;i<n;i++)
        {
            if(i%2==0)
                a[i]=a[i-2]-1;
            else
                a[i]=a[i-2]+1;
        }
        pairsort(a,s,n);
        printf("%s",s);
    }
    return 0;
}