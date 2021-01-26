#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROWS 8
#define COLS 8
#define ROW 6
#define COL 6
#define NUM_MINE 8

//初始化mine棋盘
void InitialBoard_1(int board[ROWS][COLS], int rows, int cols);
//初始化show棋盘
void InitialBoard_2(char board[ROWS][COLS], int rows, int cols);

//打印雷棋盘
void ShowBoard_1(int board[ROWS][COLS], int row, int col);

//打印show棋盘
void ShowBoard_2(char board[ROWS][COLS], int row, int col);

//布置雷函数
void SetMine(int mine[ROWS][COLS], int row, int col,int num);

//搜寻雷
void FindMine(int mine[ROWS][COLS],char show[ROWS][COLS], int rows, int cols);

//得到雷的数量
int GetNumber(int mine[ROWS][COLS], int rows, int cols,int x,int y);

//判断是否排查完毕
int Judgement(char show[ROWS][COLS], int row, int col);