#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* ================= FUNCTION DECLARATIONS ================= */
int managerLogin();
void forgotPassword();
void loadFile();
void mainMenu();

/* ================= INPUT VALIDATION FUNCTIONS ================= */

void clearBuffer()
{
    while (getchar() != '\n')
        ;
}

int getIntInput()
{
    int value;
    while (scanf("%d", &value) != 1)
    {
        printf("Invalid input! Enter numbers only: ");
        clearBuffer();
    }
    clearBuffer();
    return value;
}

float getFloatInput()
{
    float value;
    while (scanf("%f", &value) != 1)
    {
        printf("Invalid input! Enter numeric value: ");
        clearBuffer();
    }
    clearBuffer();
    return value;
}

int isValidString(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isalpha(str[i]) && str[i] != ' ')
            return 0;
    }
    return 1;
}

void getStringInput(char *str, int size)
{
    while (1)
    {
        fgets(str, size, stdin);
        str[strcspn(str, "\n")] = '\0';

        if (strlen(str) == 0)
        {
            printf("Input cannot be empty. Enter again: ");
            continue;
        }

        if (!isValidString(str))
        {
            printf("Only alphabets and spaces allowed. Enter again: ");
            continue;
        }

        break;
    }
}

/* ===== MANAGER LOGIN DATA ===== */
char managerId[20] = "admin";
char managerPass[20] = "ak47";
char securityAnswer[20] = "payroll";

/* ================= GLOBAL VARIABLES ================= */
int choice, i, id, found;
int empCount = 0;

int empId[20], empAge[20];
char empName[30][40], empDepartment[30][40];
float basic[20], hra[20], da[20];
float gross[20], tax[20], net[20];

/* ================= MANAGER LOGIN ================= */
int managerLogin()
{
    char id[20], pass[20];
    int attempts = 3;

    while (attempts > 0)
    {
        printf("\n\n\n===== MANAGER LOGIN =====\n");
        printf("\nEnter Manager ID : ");
        scanf("%19s", id);

        printf("Enter Password   : ");
        scanf("%19s", pass);
        clearBuffer();

        if (strcmp(id, managerId) == 0 && strcmp(pass, managerPass) == 0)
        {
            printf("\n------------------------\nLogin Successfully...!!!\n------------------------\n");
            return 1;
        }
        else
        {
            attempts--;
            printf("\nInvalid Credentials! Attempts Left: %d\n", attempts);
        }
    }
    return 0;
}

/* ================= EMPLOYEE FUNCTIONS ================= */

void addEmployee()
{
    if (empCount >= 20)
    {
        printf("\nEmployee limit reached!\n");
        return;
    }

    int newId;

    printf("--------------------\n\n\nEnter Employee ID: ");
    newId = getIntInput();

    if (newId <= 0)
    {
        printf("\nID must be positive!\n");
        return;
    }

    for (i = 0; i < empCount; i++)
    {
        if (empId[i] == newId)
        {
            printf("\n------------------------------\n");
            printf("Employee ID Already Exists...!!!\n");
            printf("--------------------------------\n");
            return;
        }
    }

    empId[empCount] = newId;

    printf("Enter Employee Name: ");
    getStringInput(empName[empCount], 40);

    printf("Enter Basic Salary: ");
    basic[empCount] = getFloatInput();
    if (basic[empCount] <= 0)
    {
        printf("\nSalary must be positive!\n");
        return;
    }

    printf("Enter Employee Age: ");
    empAge[empCount] = getIntInput();
    if (empAge[empCount] < 18 || empAge[empCount] > 60)
    {
        printf("\nAge must be between 18 and 60!\n");
        return;
    }

    printf("Enter Employee Department: ");
    getStringInput(empDepartment[empCount], 40);

    hra[empCount] = basic[empCount] * 0.20;
    da[empCount] = basic[empCount] * 0.10;
    gross[empCount] = basic[empCount] + hra[empCount] + da[empCount];
    tax[empCount] = gross[empCount] * 0.05;
    net[empCount] = gross[empCount] - tax[empCount];

    empCount++;
    printf("\n---------------------------------\nEmployee Added Successfully...!!!\n---------------------------------\n");
}

void deleteEmployee()
{
    if (empCount == 0)
    {
        printf("\nNo employees available.\n");
        return;
    }

    printf("--------------------\n\n\n");
    printf("Enter Employee ID to Delete: ");
    id = getIntInput();
    found = 0;

    for (i = 0; i < empCount; i++)
    {
        if (empId[i] == id)
        {
            for (int j = i; j < empCount - 1; j++)
            {
                empId[j] = empId[j + 1];
                empAge[j] = empAge[j + 1];
                basic[j] = basic[j + 1];
                hra[j] = hra[j + 1];
                da[j] = da[j + 1];
                gross[j] = gross[j + 1];
                tax[j] = tax[j + 1];
                net[j] = net[j + 1];
                strcpy(empName[j], empName[j + 1]);
                strcpy(empDepartment[j], empDepartment[j + 1]);
            }
            empCount--;
            found = 1;
            printf("\n-----------------------------------\nEmployee Deleted Successfully...!!!\n-----------------------------------\n");
            break;
        }
    }

    if (!found)
        printf("\n------------------------\nEmployee Not Found...!!!\n------------------------\n");
}

/* ================= MENU ================= */

void mainMenu()
{
    printf("\n\n\n=====================================================================================================\n\n");
    printf("                         E M P L O Y E E     P A Y R O L L     S Y S T E M \n\n");
    printf("=====================================================================================================\n");
    printf("\n                  1: ADD EMPLOYEE                             4: DELETE EMPLOYEE\n\n");
    printf("                  2: VIEW EMPLOYEES                           5: GENERATE PAYROLL SLIP\n\n");
    printf("                  3: UPDATE EMPLOYEE                          6: SAVE & EXIT\n\n\n");
    printf("--------------------\nEnter Your Choice: ");
}
void updateEmployee()
{
    int idChoice;

    while (1)
    {
        if (empCount == 0)
        {
            printf("\nNo employees available.\n");
            return;
        }
        printf("--------------------\n\n");
        printf("Enter Employee ID to Update: ");
        id = getIntInput();

        found = 0;

        for (i = 0; i < empCount; i++)
        {
            if (empId[i] == id)
            {
                found = 1;

                int ch;

                while (1)
                {
                    printf("\n--------------------------------\nWhat do you want to update...???\n--------------------------------");
                    printf("\n1.Name\n2.Salary\n3.Age\n4.Department\n5.Exit\n----------\nChoose : ");
                    ch = getIntInput();

                    if (ch == 5)
                        return;

                    switch (ch)
                    {
                    case 1:
                        printf("----------\nEnter New Name: ");
                        getStringInput(empName[i], 40);
                        break;

                    case 2:
                        while (1)
                        {
                            printf("----------\nEnter New Salary: ");
                            basic[i] = getFloatInput();
                            if (basic[i] > 0)
                                break;
                            printf("\nSalary must be positive!\n");
                        }
                        break;

                    case 3:
                        while (1)
                        {
                            printf("----------\nEnter New Age: ");
                            empAge[i] = getIntInput();
                            if (empAge[i] >= 18 && empAge[i] <= 60)
                                break;
                            printf("\nAge must be between 18 and 60!\n");
                        }
                        break;

                    case 4:
                        printf("----------\nEnter New Department: ");
                        getStringInput(empDepartment[i], 40);
                        break;

                    default:
                        printf("----------\n\n--------------------------\nInvalid choice! Try again.\n--------------------------\n");
                        continue;
                    }

                    /* Recalculate salary */
                    hra[i] = basic[i] * 0.20;
                    da[i] = basic[i] * 0.10;
                    gross[i] = basic[i] + hra[i] + da[i];
                    tax[i] = gross[i] * 0.05;
                    net[i] = gross[i] - tax[i];

                    printf("\n----------------------------\nRecord Updated Successfully!\n----------------------------\n");
                }
            }
        }

        if (!found)
        {
            printf("\n-------------------\nEmployee Not Found!\n-------------------\n\n");
            printf("1. Try Again\n2. Exit\n\n-------\nChoose: ");
            idChoice = getIntInput();

            if (idChoice == 2)
                return;
        }
    }
}
void generatePaySlip()
{
    printf("--------------------\n\n\n                                ======================================\n                                     ");
    printf("P A Y R O L L    R E P O R T \n                                ======================================\n\n");
    for (i = 0; i < empCount; i++)
    {
        printf("\n ID : %d", empId[i]);
        printf(" | Basic : %.1f", basic[i]);
        printf(" | HRA : %.1f", hra[i]);
        printf(" | DA : %.1f", da[i]);
        printf(" | Gross : %.1f", gross[i]);
        printf(" | Tax : %.1f", tax[i]);
        printf(" | NetSalary : %.1f\n", net[i]);
    }
}

void viewEmployee()
{
    printf("--------------------\n\n\n\n                           =======================================\n                                 ");
    printf("E M P L O Y E E S   L I S T \n                           =======================================\n");
    for (i = 0; i < empCount; i++)
    {
        printf("\n\n");
        printf("Emp.ID: %d", empId[i]);
        printf(" | Emp.Name: %s", empName[i]);
        printf(" | Emp.Salary: %.1f", basic[i]);
        printf(" | Emp.Age: %d", empAge[i]);
        printf(" | Emp.Department : %s", empDepartment[i]);
    }
}

void saveToFile()
{
    FILE *fp = fopen("employees.txt", "w");

    if (fp == NULL)
    {
        printf("Error saving file!\n");
        return;
    }

    for (int i = 0; i < empCount; i++)
    {
        fprintf(fp, "%d\n", empId[i]);
        fprintf(fp, "%s\n", empName[i]);
        fprintf(fp, "%d\n", empAge[i]);
        fprintf(fp, "%s\n", empDepartment[i]);
        fprintf(fp, "%.2f\n", basic[i]);
    }

    fclose(fp);
    printf("--------------------\n\n-----------------------------\nData Saved Successfully...!!!\n-----------------------------\n\n");
}

void loadFromFile()
{
    FILE *fp = fopen("employees.txt", "r");

    if (fp == NULL)
        return; // file not exist first time

    empCount = 0;

    while (empCount < 20 && fscanf(fp, "%d\n", &empId[empCount]) == 1)
    {
        fgets(empName[empCount], 40, fp);
        empName[empCount][strcspn(empName[empCount], "\n")] = '\0';

        fscanf(fp, "%d\n", &empAge[empCount]);

        fgets(empDepartment[empCount], 40, fp);
        empDepartment[empCount][strcspn(empDepartment[empCount], "\n")] = '\0';

        fscanf(fp, "%f\n", &basic[empCount]);

        /* Recalculate salary after loading */
        hra[empCount] = basic[empCount] * 0.20;
        da[empCount] = basic[empCount] * 0.10;
        gross[empCount] = basic[empCount] + hra[empCount] + da[empCount];
        tax[empCount] = gross[empCount] * 0.05;
        net[empCount] = gross[empCount] - tax[empCount];

        empCount++;
    }

    fclose(fp);
}

/* ================= MAIN ================= */

int main()
{
    if (!managerLogin())
    {
        printf("Unauthorized Access!\n");
        exit(0);
    }

    loadFromFile();

    while (1)
    {
        mainMenu();
        choice = getIntInput();

        if (choice < 1 || choice > 6)
        {
            printf("Enter choice between 1 and 6 only.\n");
            continue;
        }
        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            viewEmployee();
            break;
        case 3:
            updateEmployee();
            break;
        case 4:
            deleteEmployee();
            break;
        case 5:
            generatePaySlip();
            break;
        case 6:
            saveToFile();
            exit(0);
            break;
        default:
            printf("Feature available in original structure.\n");
        }
    }
}