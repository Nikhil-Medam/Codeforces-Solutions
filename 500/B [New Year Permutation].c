//Author: Nikhil_Medam
//Language: C
//Assignment 6 Question 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int temp[100005],vis[100005],v[1005][1005],n,a[1005],A[1005][1005],p,q[1005],v1[1005][1005];
void merge(int low,int high,int *a)
{
	int mid=(low+high)/2;
	int fptr=low,sptr=mid+1,tptr=low;
	while(fptr<=mid&&sptr<=high)
	{
		if(a[fptr]<=a[sptr])
			temp[tptr++]=a[fptr++];
		else
			temp[tptr++]=a[sptr++];
	}
	while(fptr<=mid)
		temp[tptr++]=a[fptr++];
	while(sptr<=high)
		temp[tptr++]=a[sptr++];
	for(int i=low;i<=high;i++)
		a[i]=temp[i];
}
void sort(int low,int high,int *a)
{
	if(low>=high)
		return;
	int mid=(low+high)/2;
	sort(low,mid,a);
	sort(mid+1,high,a);
	merge(low,high,a);
}
void dfs(int x)
{
	vis[x]=1;
	v[p][q[p]++]=x;
	for(int i=1;i<=n;i++)
		if(A[x][i]&&!vis[i])
			dfs(i);
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{	
		char s[1005];
		scanf("%s",s);
		for(int j=1;j<=n;j++)
			A[i][j]=s[j-1]-'0';
	}	
	for(int i=1;i<=n;i++)
		if(!vis[i])
		{
			dfs(i);
			p++;
		}
	for(int i=0;i<p;i++)
	{	
		for(int j=0;j<q[i];j++)
			v1[i][j]=a[v[i][j]];
		sort(0,q[i]-1,v1[i]);
		sort(0,q[i]-1,v[i]);
		for(int j=0;j<q[i];j++)
			a[v[i][j]]=v1[i][j];
	}
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}