#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	const int* pa = &a;	//const�� �տ� ���� ���, ������ ���� �� �� ����.
	int* const ps = &a;	//const�� �߾ӿ� ���� ���, ������ ����������, �ּҸ� �ٲ� �� ����.
	
	
	
	printf("���� a�� : %d\n", *pa);
	pa = &b;
	printf("���� b�� : %d\n", *pa);
	a = 20;
	printf("���� a�� : %d\n", *pa);

	return 0;
}