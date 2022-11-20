#include<stdio.h>
int main()
{
	int a,sum=0,n,rem;
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		rem=a%10;
		sum+=rem;
		a=a/10;
	}
	printf("%d",sum);
return 0;
}
