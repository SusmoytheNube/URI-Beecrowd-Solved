#include<stdio.h>
int main()
{
	int n,i,max = 0,count;
	
	for(i=1;i<=100;i++)
	{
		scanf("%d",&n);
		
		if (max<n)
		{
			max =n;
			count=i;
		}
		}
		
	printf("%d\n%d", max,count);
	
	return 0;
}
