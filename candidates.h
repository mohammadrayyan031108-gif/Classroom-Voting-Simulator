#ifndef CANDIDATES_H
#define CANDIDATES_H

extern int candidateCount;
extern int candidateVotes[20];
extern char candidates[20][50];

void addCandidates();
void viewCandidates();
void removeCandidate();
void viewResults();
void votingSummary();

#endif