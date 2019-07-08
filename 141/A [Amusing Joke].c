#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],str3[100];
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    int a[26]={0},b[26]={0};
    int i,j,nik=1;
    int p[200],q[100];
    if(strlen(str1)+strlen(str2)==strlen(str3))
    {
        strcat(str1,str2);
        for(i=0;i<strlen(str3);i++)
        {
        p[i]=str1[i];
        a[p[i]-65]++;
        q[i]=str3[i];
        b[q[i]-65]++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
            nik=0;
            }
        }
    }
    else
    {
        nik=0;
    }
    if(nik==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}