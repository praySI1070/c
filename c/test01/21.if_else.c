// if else��

#include <stdio.h>

int main()
{
	int a = 10;

	if (a >= 10) // a>=10�̸� a = 1
	{
		a = 1;
	}
	else		// a>=10�� �ƴ϶�� a=-1
	{
		a = -1;
	}

	printf("a : %d\n", a);

	return 0;
}