#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//游戏代码的声明 (函数声明、符号定义
#define col 10
#define row 10
//打印菜单
void menu();
//是否开始游戏
void start(int play);
//重置棋盘
void reset(char arr[row][col]);
//展示棋盘
void display(char arr[row][col]);
//判断下法是否正确
void judge(char arr[row][col],int x,int y);
//电脑下棋
void bot(char arr[row][col]);
//电脑2(高级)
void smartbot(char arr[row][col]);
//判断是否获胜或失败
char canwin(char arr[row][col]);
//棋盘是否占满
int full(char arr[row][col], int i, int j);
//输出结果
void winner(char win);