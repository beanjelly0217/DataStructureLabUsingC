#include <stdio.h>
#include <string.h>


int main()
{
printf("Enter string : ");
 char str[20],ostr[20];
 scanf("%s",str);
 strcpy(ostr,str);
 strrev(str);
 if(strcmp(str,ostr)==0)
 printf("\nString is palindrome");
 else
 printf("\nString is not palindrome");
}
