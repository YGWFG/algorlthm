//#include "������.h"
//// �˵�
//menu() {
//	printf("*******��ӭ������������Ϸ*******\n");
//	printf("*******     ��ѡ��       *******\n");
//	printf("*******    0�˳���Ϸ     *******\n");
//	printf("*******    1������Ϸ     *******\n");
//}
////��ʼ������
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
////��ӡ����
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	for (j = 0; j < col; j++)
//	{
//		printf("  %d ", j + 1); //��ӡ���� x ��������ʾ
//	}
//	printf("\n");
//
//	for (j = 0; j < col; j++)
//	{
//		printf("---|"); //��ӡ��һ������
//	}
//	printf("\n");
//
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("  %c|", board[i][j]); //��ӡ����
//		}
//		printf("  %d ", i + 1); //��ӡ���� y ��������ʾ
//		printf("\n");
//
//		for (j = 0; j < col; j++)
//		{
//			printf("---|"); //��ӡ���
//		}
//		printf("\n");
//	}
//}
//
////��������
//void ComputerMove(char board[ROW][COL], int row, int col) {
//	int x = 0;
//	int y = 0;
//	printf("������ �� ");
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
////�������
//void PlayerMove(char board[ROW][COL], int row, int col) {
//	int x = 0;
//	int y = 0;
//	printf("����ߣ� ");
//	printf("����������:(%d %d)", row, col);
//	while (1)
//	{
//		scanf("%d %d", &x, &y);
//		x--;
//		y--;
//		if (x >= 1 && x <= row && y >= 1 && y <= col) {
//			//�ɹ�����
//			if (board[x][y] == ' ') {
//				board[x][y] = '*';
//				break;
//			}
//			else {
//				printf("�������ѱ�ռ�ã�����������;");
//				continue;
//			}
//		}
//		else {
//			printf("����Ƿ������������룺");
//			continue;
//		}
//	}
//}
//
//
// //�������̣����Ƿ����� ����ƽ�ַ��� 0 ��ƽ�ַ��� 1 ֻҪ�������п�λ���򷵻� 0 ��ʾ����ƽ��
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
////�ж���Ӯ
//char Judge(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	int j = 0;
//	//�жϺ�/�����������飬Ӯ�Ҳ���
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
//	//�ж�����
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
//			//�ж�б����������
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
//		//ƽ��
//	}
//	return ' ';
//}