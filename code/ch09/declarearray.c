#include <stdio.h>

#define SIZE 5

int main(void)
{
	//�迭����
	int score[SIZE]; // int score[5];

	//�迭 ���ҿ� �� ����
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	//�迭 4��° ���ҿ� �� �������� �ʾ� �����Ⱚ ����
	score[4] = 91;
	//score[5] = 50; // ���������� �߻����� ������ ������� �߻�

	//�迭���� ���
	for (int i = 0; i < SIZE; i++)
		printf("%d  ", score[i]);
	printf("\n");

	int data[2];
	printf("%d\n", data[0]);
	printf("%d\n", data[1]);

	int value = 3;
	printf("%d\n", value);

	return 0;
}