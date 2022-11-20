#include<stdio.h>

int main()
{
	int a,t,f,e,o,s;
	scanf("%d",&a);
	if(a>=1&&a<=1000){	
	t=a/10;
	a=a%10;
	f=a/5;
	a=a%5;
	e=a/2;
	a=a%2;
	o=a/1;
	s = o + e+ f + t;
	}
	printf ("Number of the notes : %d\n10 : %d\n5 : %d\n2 : %d\n1 : %d\n",s,t,f,e,o);
	
	return 0;}
	
