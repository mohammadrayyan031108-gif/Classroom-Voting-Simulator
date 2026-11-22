
#include <stdio.h>
#include <string.h>
#include "candidates.h"
#include "voters.h"

char candidates[20][50];
int candidateCount = 0;
int candidateVotes[20] = {0};

void addCandidates()
{
    int numCandidates;

    printf("\n===== ADD CANDIDATES =====\n");
    printf("Enter the number of candidates to add: ");
    scanf("%d", &numCandidates);

    if(candidateCount + numCandidates > 20 || numCandidates <= 0)
    {
        printf("Cannot add more than 20 candidates\n");
        return;
    }

    for(int i = 0; i < numCandidates; i++)
    {
        printf("Enter name of candidate %d: ", candidateCount + 1);
        scanf(" %49[^\n]", candidates[candidateCount]);

        candidateCount++;
        printf("Candidate added successfully!\n");
    }
}

void viewCandidates()
{
    if(candidateCount == 0)
    {
        printf("No candidates added\n");
        return;
    }

    printf("\n===== CANDIDATES =====\n");

    for(int i = 0; i < candidateCount; i++)
    {
        printf("%d. %s\n", i + 1, candidates[i]);
    }
}

void removeCandidate()
{
    int choice;

    if(candidateCount == 0)
    {
        printf("No candidates to remove\n");
        return;
    }

    printf("\n===== REMOVE CANDIDATE =====\n");

    for(int i = 0; i < candidateCount; i++)
    {
        printf("%d. %s\n", i + 1, candidates[i]);
    }

    printf("\nEnter candidate number to remove: ");
    scanf("%d", &choice);

    if(choice < 1 || choice > candidateCount)
    {
        printf("Incorrect candidate number\n");
        return;
    }

    for(int i = choice - 1; i < candidateCount - 1; i++)
    {
        strcpy(candidates[i], candidates[i + 1]);
        candidateVotes[i] = candidateVotes[i + 1];
    }

    candidateCount--;

    printf("Candidate removed successfully!\n");
}

void viewResults()
{
    int i;
    int highestVotes = 0;
    int winnerIndex = 0;
    int tie = 0;

    printf("\n===== VOTING RESULTS =====\n");

    if(candidateCount == 0)
    {
        printf("No candidates available\n");
    }
    else
    {
        for(i = 0; i < candidateCount; i++)
        {
            if(candidateVotes[i] > highestVotes)
            {
                highestVotes = candidateVotes[i];
                winnerIndex = i;
                tie = 0;
            }
            else if(candidateVotes[i] == highestVotes)
            {
                tie = 1;
            }
        }

        if(tie == 1)
        {
            printf("\nIt's a tie! No single winner sad.\n");
        }
        else
        {
            printf("\n===== WINNER =====\n");
            printf("Winner: %s\n", candidates[winnerIndex]);
            printf("Votes: %d\n", highestVotes);
        }
    }
}

void votingSummary()
{
    int i;
    int totalVoted = 0;
    float percentage;

    for(i = 0; i < voterCount; i++)
    {
        if(voterHasVoted[i] == 1)
        {
            totalVoted++;
        }
    }

    if(voterCount > 0)
    {
        percentage = (float)totalVoted / voterCount * 100;
    }
    else
    {
        percentage = 0;
    }

    printf("\n===== VOTING SUMMARY =====\n");
    printf("Total Registered Voters: %d\n", voterCount);
    printf("Total Students Voted: %d\n", totalVoted);
    printf("Total Votes Cast: %d\n", totalVoted);
    printf("Voting Participation: %.2f%%\n", percentage);
}
