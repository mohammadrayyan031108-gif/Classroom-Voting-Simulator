#include <stdio.h>
#include "candidates.h"
#include "voters.h"
void manageCandidates()
{
    int choice;
    do
    {
        printf("\n===== MANAGE CANDIDATES =====\n");
        printf("1. Add Candidate\n");
        printf("2. View Candidates\n");
        printf("3. Remove Candidate\n");
        printf("4. Back to Admin Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addCandidates();
                break;
            case 2:
                viewCandidates();
                break;
            case 3:
                removeCandidate();
                break;
                case 4:
                printf("Returning to Admin Menu...\n");
                break;
                default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);
}
void manageVoters()
{
    int choice;
    do
    {
        printf("\n===== MANAGE VOTERS =====\n");
        printf("1. Add Voters\n");
        printf("2. View Voters\n");
        printf("3. Remove Voter\n");
        printf("4. Back to Admin Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addVoters();
                break;
             case 2:
                viewVoters();
                break;
            case 3:
                removeVoter();
                break;
            case 4:
                printf("Returning to Admin Menu...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);
}
void adminMenu()
{
    int choice;
    do    
    {
        printf("\n===== ADMIN MENU =====\n");
        printf("1. Manage Candidates\n");
        printf("2. Manage Voters\n");
        printf("3. View Results\n");
        printf("4. View Voting Summary\n");
        printf("5. Logout\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                manageCandidates();
                break;
            case 2:
                manageVoters();
                break;
            case 3:
                viewResults();
                break;
            case 4:
                votingSummary();
                break;
            case 5:
                printf("Logging out.\n");
                break;
            default:
                printf("Invalid Choice! Try Again.\n");
        }

    } while(choice != 5);
}
