#include <stdio.h>
#include<string.h>


int main()
{
    int len=0;
    char str[100];
    printf("Enter a String : ");
    scanf("%s",str);
    len=strlen(str);
    printf("Your String Has Length of %d.",len);
    return 0;

}
