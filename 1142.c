#include<stdio.h>
int main()
{
      int a,i,j=1;
      scanf("%d",&a);
      for(i=1;i<=a;i++)
      {
          printf("%d %d %d PUM\n",j,j+1,j+2);
          j=j+4;

      }

  return 0;
}
