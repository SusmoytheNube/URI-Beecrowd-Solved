#include<stdio.h>
int main()
{
	int a ,b,com;
	scanf("%d%d",&a,&b);
	com = b-a;
	if (com<=0)
		{
			com = 24 + com;
		}

	printf("O JOGO DUROU %d HORA(S)\n", com);
	
	return 0;
}
