#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int a,b,c,i,n=0,max=0;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		scanf("%d",&c);
		;
		if (max<c)
		{
			max=c;
			n=i;
		}
		
	}
	printf("%d",n);
	return 0;
}
	
