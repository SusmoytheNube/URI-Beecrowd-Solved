#include<stdio.h>
int main()
{
	int a,i,t1=0,t2=1,nx;
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{	
	
        printf("%d, ", t1);
        nx = t1 + t2;
        t1 = t2;
        t2 = nx;
		
	}
	return 0;
}
