#include <stdio.h>
#include <string.h>
char voters[100][50];
int voterBanned[100] = {0};
int voterHasVoted[100] = {0};
int voterCount = 0;
void addVoters()
{
    int numberOfVoters;

    printf("\nEnter number of voters to add: ");
    scanf("%d", &numberOfVoters);
    if(numberOfVoters <= 0 || voterCount + numberOfVoters > 100)
{
    printf("Can only have 100 voters\n");
    return;
}
    for(int i = 0; i < numberOfVoters; i++)
{
    printf("Enter name of voter %d: ", voterCount + 1);
    scanf(" %49[^\n]", voters[voterCount]);
    voterCount++;
}
    printf("\nVoters added\n");
}
void viewVoters()
{
    if(voterCount==0)
    {
        printf("No voters available\n");
        return;
    }
    printf("List of voters:\n");
    for(int i = 0; i < voterCount; i++)
    {
        printf("%d. %s\n", i + 1, voters[i]);
    }
}
void removeVoter()
{
    int voterNumber;
    if(voterCount==0)
    {
        printf("No voters available\n");
        return;
    }
    viewVoters();
    printf("\nEnter the number of the voter to remove: ");
    scanf("%d", &voterNumber);
    if(voterNumber < 1 || voterNumber > voterCount)
    {
        printf("Invalid voter number\n");
        return;
    }
    for(int i = voterNumber - 1; i < voterCount - 1; i++)
    {
        strcpy(voters[i], voters[i + 1]);
        voterBanned[i] = voterBanned[i + 1];
        voterHasVoted[i] = voterHasVoted[i + 1];
    }
    voterCount--;
    printf("\nVoter removed successfully.\n");

}
