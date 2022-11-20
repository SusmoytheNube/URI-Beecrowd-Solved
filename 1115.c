#include<stdio.h>
int main()
{
int a,b;
while(1)
{
scanf("%d%d",&a,&b);

if(a==0 && b==0){
    break;}

else if(a>0){
    if(b>0)
        printf("primeiro\n");
    if(b<0)
        printf("quarto\n");
        }
    else{
    if(b>0)
        printf("segundo\n");
    if(b<0)
        printf("terceiro\n");
        }
}
return 0;
}
