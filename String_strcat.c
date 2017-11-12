#include <string.h>
#include <stdio.h>



int main()
{
    char str1[50] = "Learning C++ is fun";
    char src[50] = " and easy";

    strcat(str1, src);

    printf("%s", str1) ;

    return 0;

}
