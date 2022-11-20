#include<stdio.h>
int main()
{
	int T1,T2,E1,E2,A1,A2;
	scanf("%d%d%d%d",&T1,&E1,&T2,&E2);
	
	A1 =E1/T1;
	A2 =E2/T2;
	if (A1<A2)
	{
		printf("SpaceX\n");
	}
	else
	{
		printf("Blue Origin\n");
	}
	return 0;
}
