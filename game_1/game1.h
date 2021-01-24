#define ROW 3
#define COL 3
#define PLAY '#'
#define COM '*'

#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
void menu();

void game();
void InitialBoard(char board[ROW][COL]);

void ShowBoard(char board[ROW][COL]);

void PlayMove(char board[ROW][COL]);

void ComputMove(char board[ROW][COL]);

char  Judgement(char board[ROW][COL]);

void CheckWin(char ret);

