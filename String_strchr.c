#include <string.h>
#include <stdio.h>



int main()
{
    char str[] = "It is easy.";
    char ch = 'e';

    if (strchr(str, ch))
        printf( "%c is available in %s\n", ch,str );
    else
        printf( "%c is NOT available in %s\n", ch,str );

    return 0;
}
