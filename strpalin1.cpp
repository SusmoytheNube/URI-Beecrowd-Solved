#include <stdio.h> 
#include <string.h> 
int main()
{ 
	char str[1000];
	
	int i,j;
	 
    int a,strl;
    
    gets(str);
	strl =strlen(str);
	
	for(i=1,j=strl;i<=(strl);i++,j--) 
	{ 
		if (str[i] == str[j]) 
		{ 
			a==0;
			
		}  
		else
		{
		a==1;
		}
	}
	
	if (a==0) 
		{ 
			printf("%s is  Palindrome\n", str); 
			
		}
	
	else
		{
		printf("%s is Not palindrome\n", str); 
		}
	printf("strlength %d ",strl);
	return 0; 
}


