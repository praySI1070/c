//do while�� while�� ó���� ���ǹ��� ������ ��, ó�� �ѹ��� ������ �ϳ�, �ƴϳ��� ����

#include <stdio.h>

int main()
{
	int a = 1, count = 0;

	while (a < 10)
	{
		a *= 2;
		count++;
	}
	printf("a: %d, count : %d\n", a, count);

	int b = 1;

	do
	{
		b *= 2;
	} while (b < 10);
	printf("b : %d\n", b);

	int c = 1;

	while (c < 10)	//while �� do while�� ��� ���� ���� ��쿣 ����
	{
		c *= 2;
	}

	printf("c : %d\n", c);

	return 0;
}