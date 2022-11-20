#include<stdio.h>

int main()
{
	int a1,t1,a2,t2,v1,v2;
	scanf("%d%d",&a1, &t1);
	scanf("%d%d",&a2, &t2);
	if( a1>=0 && a2>=0 && a1<=1000 && a2 <=1000 && t1>=0 && t2>=0 && t1 <=1000 && t2<=1000){
	v1 = a1*t1;
	v2 = a2*t2;
	if (v1>v2)
	{
		printf("Mustafizur Rahman\n");
	}
	
	else
	{
		printf("Mitchell Starc\n");
	}}
	return 0;
}
