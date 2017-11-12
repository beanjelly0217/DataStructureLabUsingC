#include <stdio.h>
#include<string.h>

struct GradeRec
{
    float percent;
    char grade;
};
struct StudentRec
{
    char lastName[20];
    char firstName[20];
    int age;
    GradeRec courseGrade;
};
int main()
{
    StudentRec student;
    printf( "Enter first name: ");
    scanf("%s", &student.firstName);
    printf( "Enter last name: ");
    scanf("%s", & student.lastName);
    printf( "Enter age: ");
    scanf("%d", & student.age);
    printf( "Enter overall percent: ");
    scanf("%f",& student.courseGrade.percent);
    if(student.courseGrade.percent >= 80)
    {
        student.courseGrade.grade = 'A';
    }
    else if(student.courseGrade.percent >= 60)
    {
        student.courseGrade.grade = 'B';
    }
    else
    {
        student.courseGrade.grade = 'F';
    }
    printf("\n\nHello %s %s\n",student.firstName , student.lastName);
    printf( "You are %d years of old.\n",student.age);
    printf( "Your overall percent score is %f for a grade of %c",student.courseGrade.percent ,student.courseGrade.grade);
    return 0;
}
