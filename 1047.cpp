#include<stdio.h>
int main()
{
	int a,b,c,d,com1,com2;
	scanf("%d%d%d%d",&a,&b,&c,&d);
		
	if (a==c && b==d)
	{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
    else  
    {com1 =c-a;
    com2 = d-a;
    if (com1<0 && com2<0 )
    {
    	if(com1<0)
		{com1 =24 +com1;}
	
		if(com2<0)
		{com2 =60+com2;
		com1--;}
		
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", com1,com2);
	}}
    
	
	return 0;
}
