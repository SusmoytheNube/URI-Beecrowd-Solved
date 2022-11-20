#include<stdio.h>
int main()
{
int a,i;

while(1)
{ int count=0,sum=0;
    scanf("%d",&a);

    if(a==0)
        {break;}

    else
        {
            if(a%2==0){
            for(i=a;count<5;i+=2)
            {
                sum = sum+i;
                count++;
            }}

            else{
            a++;
            for(i=a;count<5;i+=2)
            {
                sum = sum+i;
                count++;
            }}
            printf("%d\n",sum);
        }
}
return 0;
}
