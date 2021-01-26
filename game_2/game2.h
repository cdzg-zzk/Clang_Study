#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROWS 8
#define COLS 8
#define ROW 6
#define COL 6
#define NUM_MINE 8

//��ʼ��mine����
void InitialBoard_1(int board[ROWS][COLS], int rows, int cols);
//��ʼ��show����
void InitialBoard_2(char board[ROWS][COLS], int rows, int cols);

//��ӡ������
void ShowBoard_1(int board[ROWS][COLS], int row, int col);

//��ӡshow����
void ShowBoard_2(char board[ROWS][COLS], int row, int col);

//�����׺���
void SetMine(int mine[ROWS][COLS], int row, int col,int num);

//��Ѱ��
void FindMine(int mine[ROWS][COLS],char show[ROWS][COLS], int rows, int cols);

//�õ��׵�����
int GetNumber(int mine[ROWS][COLS], int rows, int cols,int x,int y);

//�ж��Ƿ��Ų����
int Judgement(char show[ROWS][COLS], int row, int col);