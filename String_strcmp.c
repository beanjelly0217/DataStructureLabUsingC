#include <string.h>
#include <stdio.h>



int main()
{
    char lhs[] = "Army";
    char rhs[] = "Army";
    int result;
    result=strcmp(lhs,rhs);
    if(result > 0)
        printf( "%s precedes %s", rhs,lhs);
    else if (result < 0)
        printf( "%s precedes %s", lhs,rhs);
    else
        printf( "%s and %s are same", lhs,rhs);
        return 0;
}
