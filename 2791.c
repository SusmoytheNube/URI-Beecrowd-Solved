#include<stdio.h>
int main()
{
     int a[4],i,d;
     for(i=0;i<4;i++)
     {
         scanf("%d",&a[i]);
         if(a[i] == 1)
         {
             d=i;
         }
     }
     printf("%d\n",d+1);
     return 0;
}

