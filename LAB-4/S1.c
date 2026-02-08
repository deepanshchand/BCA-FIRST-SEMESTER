#include <stdio.h>
int main()
{
    // declared string;
    char string[50];

    // take input from user ;
    printf("enter your message :-\n");
    gets(string);

    // i variable for acess index and count for count the length of the characters;
    int i = 0, count = 0;
    while (string[i] != '\0')
    {
        count++;
        i++;
    }

    // print ouput;
    printf("total characters = %d", count);

    return 0;
}