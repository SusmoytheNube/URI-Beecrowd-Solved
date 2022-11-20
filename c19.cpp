#include <stdio.h>
int main()
{
	int a,i,m=1;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		m= m*i;
	}
	printf("%d",m);
	return 0;
}
