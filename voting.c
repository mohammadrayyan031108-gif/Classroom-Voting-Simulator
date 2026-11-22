#include <stdio.h>
#include <string.h>
#include "voting.h"
#include "voters.h"
#include "candidates.h"
void castVote(int voterIndex)
{
    int candidateChoice;
    if(voterHasVoted[voterIndex] == 1)
{
    printf("\nYou have already voted\n");
}
else
{
    if(candidateCount == 0)
    {
        printf("\nNo candidates available to vote.\n");
    }
    else
    {
        viewCandidates();
        printf("\nEnter candidate number to vote: ");
        scanf("%d", &candidateChoice);
        if(candidateChoice >= 1 && candidateChoice <= candidateCount)
{
    candidateVotes[candidateChoice - 1]++;
    voterHasVoted[voterIndex] = 1;
    printf("\nVote casted yayy democracy\n");
}
else
{
    printf("\nInvalid candidate number!\n");
}
    }
}

}