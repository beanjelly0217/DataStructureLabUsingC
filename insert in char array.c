#include <stdio.h>
#include <string.h>


void append_char(char* s, char c) {
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

int main()
{
    char sentence[100], chtr;
    printf("Enter an array of character : ");
    scanf("%s", &sentence);
    printf("\n");
    printf("Enter the Character to add : ");
    scanf("%c",&chtr);
    scanf("%c",&chtr);
    append_char(sentence, chtr);

    printf("%s",sentence);
}
