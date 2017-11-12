#include <string.h>

int main()
{
    char str[100];
    char ch;
    printf("Enter an Array of Character: ");
    scanf("%s",&str);
    printf("I am looking for :");
    scanf("%c",&ch);
    scanf("%c",&ch);


    if (strchr(str, ch))
        printf("%c is available in | %s | \n",ch, str );
    else
        printf("%c is NOT available in | %s | \n",ch, str );

    return 0;
}
