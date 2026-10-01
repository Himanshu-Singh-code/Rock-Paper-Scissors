#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    char *names[] = {"ROCK", "PAPER", "SCISSOR"};
    /*
    0 --> ROCK
    1 --> PAPER
    2 --> SCISSOR
    */

    srand(time(NULL));   // makes the computer choice different every time
    computer = rand() % 3;

    printf("Choose 0 for ROCK ! \n");
    printf("Choose 1 for PAPER ! \n");
    printf("Choose 2 for SCISSOR ! \n");
    printf("\n");

    printf("Enter your Choice : ");
    scanf("%d", &player);

    if (player < 0 || player > 2)
    {
        printf("Invalid choice ! Please choose 0, 1 or 2. \n");
        return 0;
    }

    printf("\n");
    printf("You Choose      : %s\n", names[player]);
    printf("Computer Choose : %s\n", names[computer]);
    printf("\n");

    if (player == computer)
    {
        printf("Match Tied ! \n");
    }
    else if ((player == 0 && computer == 2) ||
             (player == 1 && computer == 0) ||
             (player == 2 && computer == 1))
    {
        printf("Player won ! \n");
    }
    else
    {
        printf("Computer Won ! \n");
    }

    return 0;
}