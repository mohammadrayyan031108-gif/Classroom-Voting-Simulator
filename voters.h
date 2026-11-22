#ifndef VOTERS_H
#define VOTERS_H

extern char voters[100][50];
extern int voterBanned[100];
extern int voterHasVoted[100];
extern int voterCount;

void addVoters();
void viewVoters();
void removeVoter();

#endif