//AREA OF RECTANGLE

#include <stdio.h>
int main()
{
    int length, width, area;

    printf("Length : ");
    scanf("%d", &length);

    printf("Width : ");
    scanf("%d", &width);

    area = length * width;
    printf("Area : %d", area);

    return 0;
}