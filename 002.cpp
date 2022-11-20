#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int t,a,i,j,len,sum;
	char str[100];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&a);
		for(j=0;str[j]!=0;j++){
		scanf("%c",&str[j]);}
		len = strlen(str);
		sum=len - a;
		
		
	}
	i=i--;
	printf("Case %d: %d",i,sum);
	return 0;
}
