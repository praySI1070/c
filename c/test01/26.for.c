#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int i;
	int count = 0;
	int c = 1, res = 0;

	for (i = 0; i < 7; i = i + 2)	//i = 0���� ����鼭 ���ǿ� �����Ƿ� ���๮ ����, ���������� ������ �޶����� �Ǹ� printf������ �Ѿ
	{
		a *= 2;
		count++;
		printf("count : %d\n", count);
	}
	printf("a : %d\n", a);

	count = 0;

	for (i = 3; i > 0; i--)	// i = 0���� ����鼭 ����
	{
		b = b + 3;
		count++;
		printf("count : %d\n", count);
	}
	printf("b : %d\n", b);

	for (int k = 9; k > 0; k--)
	{
		res = 2 * k;
		printf("2 * %d = %d\n", k, res);
	}

	return 0;
}