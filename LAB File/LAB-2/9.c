#include <stdio.h>
int main()
{
    char character;
    printf("Enter character : ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z')
    {
        printf("This is small case letter");
    }
    else if (character >= 'A' && character <= 'Z')
    {
        printf("This is capital letter");
    }
    else if (character >= '0' && character <= '9')
    {
        printf("This is digit");
    }
    else
    {
        printf("This is special symbol");
    }
    return 0;
}