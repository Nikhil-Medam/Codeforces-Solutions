#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int t1[100005],t2[100005],t3[100005];
void merge(int low,int high,int *a,int *b,int *c)
{
   int mid=(low+high)/2;
   int fptr=low,sptr=mid+1,tptr=low;
   while(fptr<=mid&&sptr<=high)
   {
      if(a[fptr]<=a[sptr])
      {
         t1[tptr]=a[fptr];
         t3[tptr]=c[fptr];
         t2[tptr++]=b[fptr++];
      }
      else
      {
         t1[tptr]=a[sptr];
         t3[tptr]=c[sptr];
         t2[tptr++]=b[sptr++];
      }
   }
   while(fptr<=mid)
   {
      t1[tptr]=a[fptr];
      t3[tptr]=c[fptr];
      t2[tptr++]=b[fptr++];
   }
   while(sptr<=high)
   {
      t1[tptr]=a[sptr];
      t3[tptr]=c[sptr];
      t2[tptr++]=b[sptr++];
   }
   for(int i=low;i<=high;i++)
      a[i]=t1[i],b[i]=t2[i],c[i]=t3[i];
}
void sort(int low,int high,int *a,int *b,int *c)
{
   if(low>=high)
      return;
   int mid=(low+high)/2;
   sort(low,mid,a,b,c);
   sort(mid+1,high,a,b,c);
   merge(low,high,a,b,c);
}
int main()
{
   int t,n;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);
      int l[n],r[n],x[n],mark[n];
      memset(mark,0,sizeof(mark));
      for(int i=0;i<n;i++)
         scanf("%d%d",&l[i],&r[i]),x[i]=i;
      sort(0,n-1,l,r,x);
      int M=r[0],ind=-1;
      for(int i=1;i<n-1;i++)
      {
         if(l[i]>M)
            ind=i;
         if(r[i]>M)
            M=r[i];
      }
      if(ind==-1)
      {
         if(l[n-1]>M)
            ind=n-1;
         if(ind==-1)
         {
            printf("-1\n");
            continue;
         }
      }
      for(int i=0;i<ind;i++)
         mark[x[i]]=1;
      for(int i=0;i<n;i++)
         printf("%d ",mark[i]+1);
      printf("\n");
   }
   return 0;
}