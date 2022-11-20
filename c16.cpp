#include<stdio.h>
int main()
{
	int a,totalDigits=0,n;
	scanf("%d",&a);
	n=a;
	while(n!=0){
    n = n/10;
    totalDigits ++;
	}
	printf("%d",totalDigits);
return 0;
}

