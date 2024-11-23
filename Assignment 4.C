Assignment 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showChoice(int ch) {
    if (ch == 1)
        printf("Rock");
    else if (ch == 2)
        printf("Paper");
    else if (ch == 3)
        printf("Scissors");
}

int findWinner(int user, int comp) {
    if (user == comp) 
        return 0; 
    else if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2))
        return 1; 
    else 
        return -1; 
}

int main() {
    int uChoice, compCh, winner;

    srand(time(NULL));

    printf("Rock Paper Scissors Game\n");
    printf("=========================\n");
    printf("Choose an option:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &uChoice);

    if (uChoice < 1 || uChoice > 3) {
        printf("Invalid input! Please run the program again.\n");
        return 0; 
    }
    int randomNum = rand() % 100; 
    if (randomNum < 33)
        compCh = 1; 
    else if (randomNum < 66)
        compCh = 2; 
    else
        compCh = 3; 

    printf("\nYou chose: ");
    showChoice(uChoice);
    printf("\nComputer chose: ");
    showChoice(compCh);

    winner = findWinner(uChoice, compCh);

    printf("\n");
    if (winner == 0)
        printf("It's a tie!\n");
    else if (winner == 1)
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}