//ť = FIFO(first in first out) ���� = FILO(first in last out)
#include <stdio.h>

int main()
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("�迭�� �� :");
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *pa);
		pa++;
	}

	return 0;
}