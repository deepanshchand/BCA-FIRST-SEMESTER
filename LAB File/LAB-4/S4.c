#include <stdio.h>
int main()
{
    // declared string_1 and take input by user;;
    char string_1[40];
    printf("write here :-\n");
    gets(string_1);

    // declared string_2 and take input by user;
    char string_2[40];
    printf("write here :-\n");
    gets(string_2);

    // logic
    // i for index;
    int i = 0;
    // condition  for until both string last null point;
    while (string_1[i] != '\0' && string_2[i] != '\0')
    {
        // if match found incress i;
        if (string_1[i] == string_2[i])
        {
            i++; // increment index;
        }
        else
        { // if match not found break whole while loop
            break;
        }
    }

    // if string_1 index value and string_2 index value both are equal then print true statement;
    if (string_1[i] == string_2[i])
    {
        printf("both statement are same");
    }
    else
    { // if both value are not equal then print false statement;
        printf("both statements are not same");
    }

    return 0;
}
