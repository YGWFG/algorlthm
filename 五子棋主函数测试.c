//#pragma once
//#include "五子棋.h"
//void game() {
//	int ret = 0;
//	char board[ROW][COL] = { 0 };
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//
//	while (1) {
//		下棋
//		ComputerMove(board, ROW, COL);  //电脑走
//		ret = Judge(board, ROW, COL);
//		if (ret != ' ') {               //@或*则判断出输赢
//			break;
//		}
//		system("CLS");
//		DisplayBoard(board, ROW, COL);  //打印棋盘
//		printf("\n");
//
//
//		PlayerMove(board, ROW, COL);    //玩家走
//		ret = Judge(board, ROW, COL);
//		if (ret != ' ') {
//			break;
//		}
//		DisplayBoard(board, ROW, COL);
//		printf("\n");
//	}
//
//	判断输赢
//	if (ret == 'p') {
//		printf("平局\n");
//		DisplayBoard(board, ROW, COL);
//	}
//
//	else if (ret == '@') {
//		printf("电脑赢\n");
//		DisplayBoard(board, ROW, COL);
//	}
//
//	else if (ret == '*') {
//		printf("玩家赢\n");
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
//		printf("请选择： ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//
//		default:
//			printf("选择错误,请重新选择：\n");
//			break;
//		}
//	} while (input);
//	/*if (input == 0) {
//		printf("退出游戏");
//	}
//	else if (input == 1) {
//		game();
//	}
//	else
//		printf("输入错误");*/
//}