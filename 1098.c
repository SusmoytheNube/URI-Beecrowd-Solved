#include<stdio.h>
int main()
{
	float i,j,k=0.0;
    for(i=0;i<=2.2;i+=0.2)
	{

		for(j=1;j<=3;j++)
		{
            printf("I=%.1f J=%.1f\n",i,(j+k));

		}
		k=k+0.2;
    }
    return 0;
}
