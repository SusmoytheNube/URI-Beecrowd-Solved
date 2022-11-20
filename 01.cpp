#include<stdio.h>

int main()
{
    int D,U,T,S;
    scanf("%d%d%d",&D,&U,&T);
    if(D>=50 &&D<=1000 && T>=1 && T<=1000 && U>=1 &&U<=1000)
    {
		S = U*T + 5*T*T;
		if(S> (D+5))
		{
			printf("Hits a six\n");
		}
		else if (S<(D+5) && S>(D-15))
		{
			printf("Out\n");
		}
		else
		{
			printf("Not out\n");
		}
    
	}
    
    return 0;
}
