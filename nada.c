#include <stdio.h>
#include <string.h>

#define lenofCustomerarray 100
#define numberofCustomer 33
#define Customer_PASSWORD_number 33

struct Customer
{
    char Customer_name[numberofCustomer];
    char Customer_password[Customer_PASSWORD_number];
};

struct Customer Customer[lenofCustomerarray];
int Customer_number = 0;

int reg()
{

    if (Customer_number == lenofCustomerarray)
    {
        printf("Maximum number of client reached.\n");
        printf("=======================================\n ");
        return 0;
    }

    struct Customer New_Customer;
    printf("=======================================\n ");
    printf("Enter username: ");

    scanf("%s", New_Customer.Customer_name);
    printf("======================================= \n");
    printf("Enter password: ");

    scanf("%s", New_Customer.Customer_password);

    Customer[Customer_number] = New_Customer;

    Customer_number++;

    printf("reg successful.\n");
}

int login()
{
    char Customername[numberofCustomer];
    char Customerpassword[Customer_PASSWORD_number];
    printf("======================================= \n");
    printf("Enter username: ");

    scanf("%s", Customername);
    printf("=======================================\n ");
    printf("Enter password: ");

    scanf("%s", Customerpassword);
    printf("======================================= \n");

    for (int i = 0; i < Customer_number; i++)
    {
        if (strcmp(Customername, Customer[i].Customer_name) == 0 && strcmp(Customerpassword, Customer[i].Customer_password) == 0)
        {
            printf("Login successful.\n");
            printf("======================================= \n");
            return 0;
        }
    }

    printf("Login failed please check username and password.\n");
    return 0;
}

int main()
{
    int number = 0;
    printf(" welcome to our system   .\n");
    printf("=======================================\n ");

    do
    {
        printf("1_ Login\n");
        printf("=======================================\n ");

        printf("2_ Sign up \n");
        printf("=======================================\n ");
        printf("3_ cancel\n");
        printf("=======================================\n ");
        printf("please enter number ");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            login();

            break;
        case 2:
            reg();
            break;
        case 3:
            printf("cancel\n");
            printf("======================================= \n");

            break;
        default:
            printf("Invalid number.\n");
            printf("======================================= \n");

            break;
        }
    } while (number != 3);

    return 0;
}