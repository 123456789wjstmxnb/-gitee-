#define _CRT_SECURE_NO_WARNINGS
#include "������.h"
//��Ϸ�����ʵ��
void menu() {
    printf("*****************************************\n");
    printf("***************������С��Ϸ**************\n");
    printf("********************HX*******************\n");
    printf("*****************��ӭ����****************\n");
    printf("**************��ʼ(1)/����(0)************\n");
    printf("*****************************************\n");
}
void start(int play)
{
    do {
        menu();
        scanf("%d", &play);
        switch (play) {
        case 1:
            printf("������!\n");
            game();
            break;
        case 0:
            printf("��ӭ���´�����!\n");
            break;
        default:
            printf("�������!����������\n");
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
    printf("��ѡ����Ҫ�µ�����>\n");
    do {
        scanf("%d %d", &x, &y);
        if (arr[x - 1][y - 1] == '*' || arr[x - 1][y - 1] == '#') {
            printf("��������Ѿ����¹��ˣ��뻻�����ӣ�\n");
        }
        else if ((x <= row && y <= col) && (x >= 1 && y >= 1)) {
            arr[x - 1][y - 1] = '*';
            break;
        }
        else {
            printf("����������������⣬����������!\n");
        }
    } while (1);
}
void bot(char arr[row][col]) {
    printf("��������:\n");
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
//���� -- ����1
//û�� -- ����0
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
*--���Ӯ
#--����Ӯ
C--ƽ��
D--����
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
        printf("��һ�ʤ��\n");
    }
    else if (win == '#') {
        printf("���Ի�ʤ��\n");
    }
    else if (win == 'C') {
        printf("ƽ�֣�\n");
    }
}
