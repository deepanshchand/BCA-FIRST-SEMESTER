#include <stdio.h>
int main()
{
    // define string_1 ,string_2and take input;
    char string_1[50];
    printf("write here:-\n");
    gets(string_1);

    char string_2[50];
    printf("write here:-\n");
    gets(string_2);

    // logic for find first string termination point;
    int i = 0;
    while (string_1[i] != '\0')
    {
        i++;
    }

    // logic for copy string_2 in sting_1;
    int j = 0;
    while (string_2[j] != '\0')
    {
        string_1[i] = string_2[j];
        i++;
        j++;
    }

    // add '\0' termination at end of string_1;
    string_1[i] = '\0';

    // print result;
    printf("after merge:-\n%s", string_1);

    return 0;
}