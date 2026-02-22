#include <stdio.h>
int main()
{
    // define string;
    char string_1[50];
    char string_2[50];

    // take input;
    printf("write here :-\n");
    gets(string_1);

    // logic;
    int i = 0;
    while (string_1[i] != '\0')
    {
        string_2[i] = string_1[i];
        i++;
    }

    // add termination point in string_2;
    string_2[i] = '\0';

    // print result;
    printf("%s", string_2);

    return 0;
}