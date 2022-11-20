#include <stdio.h>
int main()
{
 int n, i,j;
 scanf("%d",&n);
 for (i = 1;i<=10;i++)
 {
	j= i*n;
	printf("%d x %d = %d\n",i,n,j);
 }
 
 return 0;
}
