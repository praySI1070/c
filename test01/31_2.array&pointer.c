//큐 = FIFO(first in first out) 스택 = FILO(first in last out)
#include <stdio.h>

int main()
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값 :");
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *pa);
		pa++;
	}

	return 0;
}