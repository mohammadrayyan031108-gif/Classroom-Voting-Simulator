#include <stdio.h>
#include"admin_menu.h"
void adminLogin()
{
    int password;
    printf("\n=====ADMIN LOGIN=====\n");
    printf("Enter Admin Password :");
    scanf("%d",&password);
    if(password == 1234)
    {
        printf("Admin Login Successful\n");
        adminMenu();
        // Admin login
    }
    else
    {
        printf("Incorrect Password. Access Denied.\n");
    }

}