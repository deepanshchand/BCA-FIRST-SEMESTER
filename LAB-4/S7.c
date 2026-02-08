#include <stdio.h>
int main()
{
    // declared string and take input;
    char string[80];
    printf("write sentense :-\n");
    gets(string);

    // i for access index;
    int count = 0; // count for pair vowel count;
    int i = 0;
    // condition;
    while (string[i] != '\0')
    {

        // outer if for check currect character is vowel;
        if (string[i] == 'a' || string[i] == 'A' ||
            string[i] == 'e' || string[i] == 'E' ||
            string[i] == 'i' || string[i] == 'I' ||
            string[i] == 'o' || string[i] == 'O' ||
            string[i] == 'u' || string[i] == 'U')
        {
            // inner if for check next element is vowel or not;
            if (string[i + 1] == 'a' || string[i + 1] == 'A' ||
                string[i + 1] == 'e' || string[i + 1] == 'E' ||
                string[i + 1] == 'i' || string[i + 1] == 'I' ||
                string[i + 1] == 'o' || string[i + 1] == 'O' ||
                string[i + 1] == 'u' || string[i + 1] == 'U')
            {
                // if both true then count ++;
                count++;
            }
        }

        i++;
    }

    // print pair of vowel;
    printf("Total successive vowel pairs = %d", count);

    return 0;
}