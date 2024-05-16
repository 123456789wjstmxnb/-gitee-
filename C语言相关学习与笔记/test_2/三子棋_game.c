#define _CRT_SECURE_NO_WARNINGS
#include "三子棋.h"
//游戏代码的实现
void menu() {
    printf("*****************************************\n");
    printf("***************井字棋小游戏**************\n");
    printf("********************HX*******************\n");
    printf("*****************欢迎来玩****************\n");
    printf("**************开始(1)/结束(0)************\n");
    printf("*****************************************\n");
}
void start(int play)
{
    do {
        menu();
        scanf("%d", &play);
        switch (play) {
        case 1:
            printf("井字棋!\n");
            game();
            break;
        case 0:
            printf("欢迎你下次来玩!\n");
            break;
        default:
            printf("输入错误!请重新输入\n");
            break;
        }
    } while (play);
}
void reset(char arr[row][col]) {
    for (int a = 0; a < row; a++) {
        for (int b = 0; b < col; b++) {
            arr[a][b] = ' ';
        }
    }
}
void display(char arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int b = 0; b < col; b++) {
            printf(" %c ", arr[i][b]);
            if (b < col - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1) {
            for (int c = 0; c < row; c++) {
                printf("---");
                if (c < row - 1) {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}
void judge(char arr[row][col],int x,int y) {
    printf("请选择你要下的坐标>\n");
    do {
        scanf("%d %d", &x, &y);
        if (arr[x - 1][y - 1] == '*' || arr[x - 1][y - 1] == '#') {
            printf("这个格子已经被下过了，请换个格子！\n");
        }
        else if ((x <= row && y <= col) && (x >= 1 && y >= 1)) {
            arr[x - 1][y - 1] = '*';
            break;
        }
        else {
            printf("你输入的坐标有问题，请重新输入!\n");
        }
    } while (1);
}
void bot(char arr[row][col]) {
    printf("电脑下棋:\n");
    do {
        int x = rand() % row;
        int y = rand() % col;
        if (arr[x][y] == '*' || arr[x][y] == '#') {
            continue;
        }
        else{
            arr[x][y] = '#';
            break;
        }
    } while (1);
}
//满了 -- 返回1
//没满 -- 返回0
int full(char arr[row][col], int i, int j) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}
/*
*--玩家赢
#--电脑赢
C--平局
D--继续
*/
char canwin(char arr[row][col]) {
    for (int i = 0; i < row; i++) {
        if (arr[i][0] != ' ' && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
            return arr[i][0];
        }
    }
        for (int j = 0; j < col; j++) {
            if (arr[0][j] != ' ' && arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j]) {
                return arr[j][0];
            }
        }
        if (arr[0][0] != ' ' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
            return arr[0][0];
        }
        if (arr[0][2] != ' ' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
            return arr[0][2];
        }
        if (full(arr, row, col)) {
            return 'C';
        }
        else {
            return 'D';
        }
}

void winner(char win){
    if (win == '*') {
        printf("玩家获胜！\n");
    }
    else if (win == '#') {
        printf("电脑获胜！\n");
    }
    else if (win == 'C') {
        printf("平局！\n");
    }
}
