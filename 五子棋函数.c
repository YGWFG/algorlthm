//#include "五子棋.h"
//// 菜单
//menu() {
//	printf("*******欢迎来到五子棋游戏*******\n");
//	printf("*******     请选择       *******\n");
//	printf("*******    0退出游戏     *******\n");
//	printf("*******    1进入游戏     *******\n");
//}
////初始化棋盘
//void InitBoard(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			board[i][j] = ' ';
//		}
//	}
//}
//
//
//
////打印棋盘
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	for (j = 0; j < col; j++)
//	{
//		printf("  %d ", j + 1); //打印棋盘 x 轴坐标提示
//	}
//	printf("\n");
//
//	for (j = 0; j < col; j++)
//	{
//		printf("---|"); //打印第一行棋盘
//	}
//	printf("\n");
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("  %c|", board[i][j]); //打印竖标
//		}
//		printf("  %d ", i + 1); //打印棋盘 y 轴坐标提示
//		printf("\n");
//
//		for (j = 0; j < col; j++)
//		{
//			printf("---|"); //打印横标
//		}
//		printf("\n");
//	}
//}
//
////电脑下棋
//void ComputerMove(char board[ROW][COL], int row, int col) {
//	int x = 0;
//	int y = 0;
//	printf("电脑走 ： ");
//	while (1) {
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ') {
//			board[x][y] = '@';
//			break;
//		}
//		else {
//			continue;
//		}
//	}
//}
//
////玩家下棋
//void PlayerMove(char board[ROW][COL], int row, int col) {
//	int x = 0;
//	int y = 0;
//	printf("玩家走： ");
//	printf("请输入坐标:(%d %d)", row, col);
//	while (1)
//	{
//		scanf("%d %d", &x, &y);
//		x--;
//		y--;
//		if (x >= 1 && x <= row && y >= 1 && y <= col) {
//			//成功下棋
//			if (board[x][y] == ' ') {
//				board[x][y] = '*';
//				break;
//			}
//			else {
//				printf("该坐标已被占用，请重新输入;");
//				continue;
//			}
//		}
//		else {
//			printf("坐标非法，请重新输入：");
//			continue;
//		}
//	}
//}
//
//
// //遍历棋盘，看是否满了 不是平局返回 0 ，平局返回 1 只要棋盘上有空位置则返回 0 表示不是平局
//static int IsFull(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			if (board[i][j] == ' ') {
//				return 0;
//			}
//		}
//	}
//	return 1;
//
//}
//
////判断输赢
//char Judge(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	int j = 0;
//	//判断横/竖线上五连珠，赢家产生
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			if (board[i][j] == board[i][j + 1]
//				&& board[i][j + 1] == board[i][j + 2]
//				&& board[i][j + 2] == board[i][j + 3]
//				&& board[i][j + 3] == board[i][j + 4]
//				&& board[i][j] != ' ')
//			{
//				return board[i][j];
//			}
//
//		}
//	}
//	//判断竖线
//	for (j = 0; j < col; j++) {
//		for (i = 0; i < row; i++) {
//			if (board[i][j] == board[i + 1][j]
//				&& board[i + 1][j] == board[i + 2][j]
//				&& board[i + 2][j] == board[i + 3][j]
//				&& board[i + 3][j] == board[i + 4][j]
//				&& board[i][j] != ' ')
//			{
//				return board[i][j];
//			}
//
//		}
//	}
//			//判断斜线上五连珠
//	for (i = 0; i < row; i++) {
//		if (board[i][i] == board[i + 1][i + 1]
//			&& board[i + 1][i + 1] == board[i + 2][i + 2]
//			&& board[i + 2][i + 2] == board[i + 3][i + 3]
//			&& board[i + 3][i + 3] == board[i + 4][i + 4]
//			&& board[i][i] != ' ')
//		{
//			return board[i][i];
//		}
//
//		if (board[i][i + 4] == board[i + 1][i + 3]
//			&& board[i + 1][i + 3] == board[i + 2][i + 2]
//			&& board[i + 2][i + 2] == board[i + 3][i + 1]
//			&& board[i + 3][i + 1] == board[i + 4][i]
//			&& board[i][i + 4] != ' ')
//		{
//			return board[i][i + 4];
//		}
//	}
//	if (IsFull(board, row, col)) {
//		return 'p';
//		//平局
//	}
//	return ' ';
//}