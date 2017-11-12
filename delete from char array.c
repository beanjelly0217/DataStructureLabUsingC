#include <stdio.h>
#include <string.h>
#include<conio.h>

int main()
{
    char sentence[100], letter;
    printf("Enter an array of character : ");
    scanf("%s",& sentence);
    printf("\n");
    printf("Enter the Character to delete : ");
    scanf("%c",&letter);
    scanf("%c",&letter);


    char temp[100]; int i=0;
    for( i = 0; sentence[i] != '\0'; i++)
    {
        if(sentence[i] != letter)
        {
            temp[i]=sentence[i];
            printf("%c",temp[i]);
        }
    }
    return 0;

}
