#include<stdio.h>
int main()
{
int a,i;
scanf("%d",&a);
for(i=0;i<10;i++)
{
    printf("N[%d] = %d\n",i,a);
    a*=2;
}
return 0;
}
