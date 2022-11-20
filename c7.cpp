#include<stdio.h>
int main()
{
	int i,a[10];
	
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	
			if(a[i]>5 && a[i]<10)
			{
				printf("%d ",1);
			}
			else 
			{
				printf("%d ",a[i]);
			}
	
	}
	
return 0;

}
	
