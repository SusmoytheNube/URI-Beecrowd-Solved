#include<stdio.h>
int main()
{
	int u,v;
	float a,T;
	scanf("%d%d%f",&u,&v,&a);
	
	T =(v-u)/a;
	printf("%.1f",T);
	return 0;
}
