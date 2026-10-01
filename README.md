# Rock Paper Scissors Game (C)

A simple console-based Rock Paper Scissors game written in C. You play one round against the computer.

## Features

- Computer picks a different move every time you run the game
- Shows the moves as ROCK / PAPER / SCISSOR
- Checks for invalid input (only 0, 1 or 2 allowed)
- Tells you if you won, the computer won, or the match tied

## Concepts Used

- Variables and arrays
- `if / else if / else` statements
- Logical operators (`&&`, `||`)
- `rand()` and `srand()` for random numbers
- `printf()` and `scanf()`

## How to Run

1. Compile the program:
   ```
   gcc rock_paper_scissors.c -o rock_paper_scissors
   ```
2. Run it:
   ```
   ./rock_paper_scissors
   ```
   (On Windows: `rock_paper_scissors.exe`)

## How to Play

- Enter `0` for ROCK, `1` for PAPER, `2` for SCISSOR.
- Rock beats Scissor, Scissor beats Paper, Paper beats Rock.

## Sample Output

```
Choose 0 for ROCK !
Choose 1 for PAPER !
Choose 2 for SCISSOR !

Enter your Choice : 0

You Choose      : ROCK
Computer Choose : SCISSOR

Player won !
```

## Author

Himanshu
