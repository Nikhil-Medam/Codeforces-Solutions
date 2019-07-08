#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[26],b[10];
    char s[10];
    for(i=0;i<26;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        for(j=0;j<strlen(s);j++)
        {
            b[j]=s[j];
        }
        a[b[0]-97]++;
    }
    printf("%d\n",6-n);
    if(a[1]!=1)
    {
        printf("Space\n");
    }
    if(a[6]!=1)
    {
        printf("Time\n");
    }
    if(a[14]!=1)
    {
        printf("Soul\n");
    }
    if(a[15]!=1)
    {
        printf("Power\n");
    }
    if(a[17]!=1)
    {
        printf("Reality\n");
    }
    if(a[24]!=1)
    {
        printf("Mind\n");
    }
    
}