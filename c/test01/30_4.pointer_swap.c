#include <stdio.h>

void swap(int* pa, int* pb);

int main()
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b%d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)	//���������� �ٲ� �� �ִ�.
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//void swap();   //���� �Լ��� a,b�� �ǵ�� ���� �����Ͱ� ������ ���� ����.
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap();
//	printf("a:%d, b:%d\n", a, b);
//
//	return 0;
//}
//
//void swap()
//{
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}

//void swap(int x, int y);  //�̰ŵ� �۵� ����.
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap(a,b);
//	printf("a:%d, b:%d\n", a, b);
//
//	return 0;
//}
//
//void swap(int x, int y)
//{
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//}