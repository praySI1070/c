#include <stdio.h>

int main()
{
	int test;

	test = minus(10, 2, 5);



	printf("%d\n", test);



}

int minus(int x, int y, int z)
{
	int minus_1;

	minus_1 = x - y - z;

	return minus_1;		//retrun���� ������ü�� �ѱ�� ���� �ƴ϶� ������ ����ִ� ���� �ѱ�� ���̴�.
	
}