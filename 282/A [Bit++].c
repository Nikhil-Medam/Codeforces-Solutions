#include <stdio.h>

int main()
{
  char str[10];
  int n,ans=0;
  scanf("%d",&n);
  while(n!=0)
    {
      scanf(" %s",str);
      if(str[1]=='+')
    ans++;
      else
    ans--;
    n--;
    }
  printf("%d\n",ans);
  return 0;
}