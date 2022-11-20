#include<stdio.h>
int main()
{
int a,b,k,n,i,j;
scanf("%d",&a);
scanf("%d",&b);

for(i=1;;i++)
{
if(b>0)
break;

else
    scanf("%d",&b);
}
int sum=0;
for(j=1,k=a;j<=b;j++,k++)
{
    sum=sum+k;
}
printf("%d\n",sum);

return 0;

}
