#include<stdio.h>
int main()
{
int a,b,i;

scanf("%d",&a);
while(1){
scanf("%d",&b);
if(b>a)
    break;
}
int sum=0,count=0;
for(i=a;sum<=b;i++)
{
    sum=sum+i;
    count++;
}
printf("%d\n",count);
return 0;
}
