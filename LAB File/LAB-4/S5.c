#include <stdio.h>
int main()
{
    // decalred string and take input;
    char string[80];
    printf("write sentence not more then 80 character:-\n");
    gets(string);

    // logic;
    int i = 0; // for index;
    while (string[i] != '\0')
    {
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
        {

            // store copy of i in j because index jump when we shift values;
            int j = i;
            // inner loop shift until the '\0' point;
            while (string[j] != '\0')
            {
                string[j] = string[j + 1];
                j++; // increment;
            }

            i--; // use i-- before i++ because check  just next value of vowel match;
        }

        i++;
    }

    // print result;
    printf("sentence after remove vowels :- \n");
    printf("%s", string);

    return 0;
}