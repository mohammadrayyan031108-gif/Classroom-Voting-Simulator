
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "voters.h"
#include "voting.h"

void studentLogin()
{
    char studentName[50];
    int found = 0;

    printf("\n===== STUDENT LOGIN =====\n");
    printf("Enter your registered name: ");
    scanf(" %49[^\n]", studentName);

    for(int i = 0; i < voterCount; i++)
    {
        if(strcmp(studentName, voters[i]) == 0)
        {
            found = 1;

            printf("\nLogin Successful!\n");
            castVote(i);

            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent Not Registered. You cant vote lil bro.\n");
    }
}
