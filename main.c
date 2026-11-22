#include<stdio.h>
#include "admin.h"
#include "candidates.h"
#include "student.h"

int main()
{
    int choice;
    printf("============================\n");
    printf("CLASSROOM VOTING SIMULATOR\n");
    printf("============================\n");

    do
    {
        printf("\nMain Menu\n");
        printf("1.Admin Login\n");
        printf("2.Student Login\n");
        printf("3.Exit\n");

        printf("\nEnter your choice :");
        scanf("%d",&choice);

        switch(choice)

        {
            case 1:
                adminLogin();
                break;
            case 2:
                studentLogin();
                break;
             case 3:
                printf("Exiting Voting Simulator...\n");
                break;
             default:
                printf("Invalid Choice!!!!!!!! Try Again.\n");
         }
    }
    while(choice!=3);
    return 0;
}