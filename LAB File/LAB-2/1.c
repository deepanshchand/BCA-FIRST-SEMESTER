#include <stdio.h>
int main()
{
    // define Data type;
    int quantity;
    float item_price, expense, total_expenses;

    // prompt user for input;
    printf("Enter Quantity : ");
    scanf("%d", &quantity);
    printf("Price (per item) : ");
    scanf("%f", &item_price);

    // conditions apply;
    if (quantity > 1000)
    {
        expense = (quantity * item_price) * 0.1;            // for discount 10% off;
        total_expenses = (quantity * item_price) - expense; // subtracted 10% discount from total expenses;
        printf("Total Expenses : %.2f", total_expenses);    // total expenses after 10% discount off;
    }
    else
    {
        printf("Total Expenses : %.2f", quantity * item_price); // without 10% discount off;
    }
    return 0;
}