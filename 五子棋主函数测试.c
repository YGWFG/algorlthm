//#pragma once
//#include "������.h"
//void game() {
//	int ret = 0;
//	char board[ROW][COL] = { 0 };
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//
//	while (1) {
//		����
//		ComputerMove(board, ROW, COL);  //������
//		ret = Judge(board, ROW, COL);
//		if (ret != ' ') {               //@��*���жϳ���Ӯ
//			break;
//		}
//		system("CLS");
//		DisplayBoard(board, ROW, COL);  //��ӡ����
//		printf("\n");
//
//
//		PlayerMove(board, ROW, COL);    //�����
//		ret = Judge(board, ROW, COL);
//		if (ret != ' ') {
//			break;
//		}
//		DisplayBoard(board, ROW, COL);
//		printf("\n");
//	}
//
//	�ж���Ӯ
//	if (ret == 'p') {
//		printf("ƽ��\n");
//		DisplayBoard(board, ROW, COL);
//	}
//
//	else if (ret == '@') {
//		printf("����Ӯ\n");
//		DisplayBoard(board, ROW, COL);
//	}
//
//	else if (ret == '*') {
//		printf("���Ӯ\n");
//		DisplayBoard(board, ROW, COL);
//	}
//}
//
//
//void main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("��ѡ�� ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//
//		default:
//			printf("ѡ�����,������ѡ��\n");
//			break;
//		}
//	} while (input);
//	/*if (input == 0) {
//		printf("�˳���Ϸ");
//	}
//	else if (input == 1) {
//		game();
//	}
//	else
//		printf("�������");*/
//}