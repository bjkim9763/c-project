#include <stdio.h>

int main(void)
{//���� 5
	int A[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};//�迭 ����
	int B[4][2];//�迭 ����
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			B[j][i] = A[i][j];
		}
	}//A�� B�� ��ҵ��� ���� ���ο� ���ΰ� �������� �ִ�.
	//�׷��� �ݺ����� ����� ������ �ش�.
	puts("A: \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d", A[i][j]);
		}
		printf("\n");
	}//�ݺ����� ����� A���
	puts("\nB: \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d",B[i][j]);
		}
		printf("\n");
	}//�ݺ����� ����� B�� ���
	//�̷ν� A�� ����� B�� �̲���´ٴ°� �����ߴ�
	return 0;
}