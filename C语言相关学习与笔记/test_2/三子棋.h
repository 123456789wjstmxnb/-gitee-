#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��Ϸ��������� (�������������Ŷ���
#define col 10
#define row 10
//��ӡ�˵�
void menu();
//�Ƿ�ʼ��Ϸ
void start(int play);
//��������
void reset(char arr[row][col]);
//չʾ����
void display(char arr[row][col]);
//�ж��·��Ƿ���ȷ
void judge(char arr[row][col],int x,int y);
//��������
void bot(char arr[row][col]);
//����2(�߼�)
void smartbot(char arr[row][col]);
//�ж��Ƿ��ʤ��ʧ��
char canwin(char arr[row][col]);
//�����Ƿ�ռ��
int full(char arr[row][col], int i, int j);
//������
void winner(char win);