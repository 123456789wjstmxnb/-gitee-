#define _CRT_SECURE_NO_WARNINGS
#include "������.h"
//������Ϸ�߼�

void game() {
    char win;
    char arr[row][col] = {0};
    reset(arr);
    int x = 0;
    int y = 0;
    display(arr);
    do {
        judge(arr, x, y);
        display(arr);
        win = canwin(arr);
        if (win != 'D') {
            break;
        }
        bot(arr);
        display(arr);
        win = canwin(arr);
        if (win != 'D') {
            break;
        }
    } while (1);
    winner(win);
}
//int main() {
//    int play = 0;
//    srand((unsigned int)time(NULL)); //������������������
//    start(play);
//	return 0;
//}