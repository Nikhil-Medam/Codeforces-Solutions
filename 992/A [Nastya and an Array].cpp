#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int a[n];
	int k=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
	    if(a[i]!=a[i+1]&&a[i]!=0)
	    {
	        k++;
	    }
	}
	if(a[n-1]!=0)
	{
	    k++;
	}
	cout<<k;
	return 0;
}