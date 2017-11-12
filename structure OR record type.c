#include <stdio.h>


struct Student
{
    char name[30];
    int id;
} std1, std2;

int main(){
    printf("1st Student \n");

    // Input of feet for structure variable dist1
    printf("Enter Name: ");
    scanf("%s",&std1.name);
    printf("Enter Id: ");
    scanf("%d",&std1.id);
    printf("Name : %s || Id : %d",std1.name,std1.id);

    return 0;

}
