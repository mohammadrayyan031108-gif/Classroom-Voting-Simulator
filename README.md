# Classroom Voting Simulator

## About the Project
The Classroom Voting Simulator is a simple voting management system developed using the C programming language.

It allows an administrator to manage candidates and voters, while registered students can log in and cast their votes.

## Features
- Admin login with password authentication
- Add, view and remove candidates
- Add, view and remove voters
- Student login using registered names
- Cast votes for available candidates
- Prevent students from voting more than once
- View voting results and winner
- View voting participation summary

## Technologies Used
- C Programming Language
- GCC Compiler
- Visual Studio Code

## Project Files
The project is divided into separate C source and header files:
- `main.c`
- `admin.c` and `admin.h`
- `admin_menu.c` and `admin_menu.h`
- `candidates.c` and `candidates.h`
- `voters.c` and `voters.h`
- `student.c` and `student.h`
- `voting.c` and `voting.h`

## How to Run

Compile the project:

```bash
gcc main.c admin.c admin_menu.c candidates.c voters.c student.c voting.c -o voting.exe
```

Run the program:

```bash
./voting.exe
```

