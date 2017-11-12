#include <string.h>
#include <stdio.h>



int main()
{
    char src[] = "Hello Everyone.";
    char str1[20];

    strcpy(str1,src);
    printf("%s", str1);
    return 0;
}
