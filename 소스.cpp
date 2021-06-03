#include <stdio.h>

int main(void)
{//문제 5
	int A[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};//배열 선언
	int B[4][2];//배열 선언
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			B[j][i] = A[i][j];
		}
	}//A와 B의 요소들은 각각 가로와 세로가 뒤집어져 있다.
	//그래서 반복문을 사용해 뒤집어 준다.
	puts("A: \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d", A[i][j]);
		}
		printf("\n");
	}//반복문을 사용해 A출력
	puts("\nB: \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d",B[i][j]);
		}
		printf("\n");
	}//반복문을 사용해 B를 출력
	//이로써 A를 사용해 B를 이끌어냈다는걸 증명했다
	return 0;
}