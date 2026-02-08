#include <stdio.h>
int main()
{
    // decalred string and take input by user;
    char string[80];
    printf("enter sentence :- \n");
    gets(string);

    // logic;
    // i use for index of string;
    int i = 0;
    // check sentence until NULL point;
    while (string[i] != '\0')
    {
        if ((string[i] == 't' || string[i] == 'T') &&
            (string[i + 1] == 'h' || string[i + 1] == 'H') &&
            (string[i + 2] == 'e' || string[i + 2] == 'E') &&
            (string[i + 3] == ' ' || string[i + 3] == '\0'))
        {

            // prevent from jump index;
            int j = i;
            // inner loop for shift the characters ;
            while (string[j] != '\0')
            {
                // use +4 of the +space =4;
                string[j] = string[j + 4];
                j++;
            }

            // use i-- before i++ check the shift digit;
            i--;
        }

        i++;
    }

    // print output after remove "the" from the sentence;
    printf("%s", string);

    return 0;
}