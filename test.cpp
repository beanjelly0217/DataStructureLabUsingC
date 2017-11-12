#include<cstring>
#include<stdio.h>


int main()
{
    float number, fra_number;
    int aux_number;
    cout<< "Enter a number : ";
    scanf("%d) number;
    aux_number=number;
    fra_number=number-aux_number;
    printf("Integer part : "<<aux_number<<endl;
    printf("Fraction part : "<<fra_number<<endl;

}
