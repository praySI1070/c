#include <stdio.h>

int main()
{
	int i, j;
	int k = 1;
	for (i = 0; i < 5; i++)		// ���� 3��
	{
		for (j = 0; j < k; j++)
		{
			printf("*");
		}
		k += 1;
		printf("\n");
	}

	for (i = 0; i < 5; i++)		//���� 2��
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("#");
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++)		//������
	{
		for (k = 4; k > i; k--)
		{
			printf(" ");
		}

		for (j = 0; j < i + 1 ; j++)
		{
			printf("@");
		}
		printf("\n");
	}

	printf("%d", i);  // int�� �ۿ��� �����߱� ������ i�� �ۿ��� ����
}