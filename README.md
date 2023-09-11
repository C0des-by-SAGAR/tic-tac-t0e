# tic-tac-t0e
The provided code appears to be a C program for a console-based Tic-Tac-Toe game. Let's break down the code and provide explanations for each section:

```c
//TIC-TAC-TOE CODE
//AUTHOR:: SAGAR SINGH DATE:: 22/04/2023
#include<stdio.h>
#include<conio.h>
```
- These lines are comments that provide information about the code's title, author, and date of creation. They don't affect the code's functionality.

```c
int row; int col;
```
- These lines declare two global integer variables `row` and `col`, which will be used to store the row and column numbers for the Tic-Tac-Toe game grid.

```c
int choose(int n);
```
- This line declares a function prototype for the `choose` function, which is used to determine the location of the box chosen by users based on the box number.

```c
int main()
{
    // Code for the main function
}
```
- This is the main function of the program, where the execution of the Tic-Tac-Toe game begins.

Inside the `main` function:

- The program starts by displaying a welcome message and initializing various variables.

- A 2D array `box` is used to represent the Tic-Tac-Toe game board.

- Two characters `x` and `o` represent the symbols for player 1 (X) and player 2 (O).

- Two character arrays `p1` and `p2` are used to store the names of player 1 and player 2.

- A label (`label5`) is defined, which allows the game to be replayed after completion.

- The game board is initialized with underscores, and loading messages are displayed.

- Rules and the initial state of the game board are displayed.

- Player names are input from the user.

- The game loop starts, allowing players to take turns.

- Inside the game loop, players are prompted to choose a box on the grid, and the `choose` function is called to determine the corresponding row and column.

- The code checks for various conditions, including overwriting an opponent's box, out-of-bounds input, and updates the game board accordingly.

- After each turn, the current state of the game board is displayed.

- The code checks for a win condition or a draw, and if either is met, the game ends.

- After the game ends, the program asks if the players want to play again.

- If players choose to play again, the game is restarted from the `label5` point; otherwise, the program terminates.

```c
int choose(int n)
{
    // Code for the choose function
}
```
- This is the `choose` function, which takes an integer `n` as input (representing the box number chosen by the player) and determines the corresponding row and column on the game board.

Overall, this code implements a simple text-based Tic-Tac-Toe game for two players. It includes game rules, player input, and win/draw conditions. Players can choose to play multiple rounds, and the game restarts if desired.
