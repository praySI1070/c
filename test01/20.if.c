//if�� �⺻����

#include <stdio.h>

int main()
{
	int a = 20;
	int b = 0;

	if (a > 10)	// ���̱� ������ �۵���
	{
		b = a;
	}
	printf("a : %d, b = %d\n", a, b);

	if (a < 10)	//�����̱� ������ �۵�����
	{
		b = 40;
	}
	printf("a : %d, b = %d\n", a, b);

	return 0;
}