#include <stdio.h> 
#include <string.h> 
int main()
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    char str[10000];
    gets(str);
    int h = strlen(str) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 
