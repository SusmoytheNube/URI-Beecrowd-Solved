#include<stdio.h>
#include <math.h>
int main ()
{
	int a,b,c,x;double n;
	scanf("%d%d%d%d",&x,&a,&b,&c);
	if(x<0)
	{
		printf("We can find the value of X using Bashkara's Formula.");
	}
	else
	{
		if (a>0 && a<0 && b>0 && b<0 && c>0 && c<0)
		{
			if(c<0 && a>0 && b>0)
			{
				n = -((a*x*x)+(b*x));
				printf("%.2f",n);
			}
			else if(a<0 && c> 0 && b>0)
			{
				n = (-(c/x)-b)/x;
				printf("%.2f",n);
			}
			else 
			{
				n = (-(a*x)-(c/x));
				printf("%.2f",n);
			}
		}
	}
	return 0;
}
