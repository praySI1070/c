#include <stdio.h>

int main()
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res); //�켱 ������ �����Ƿ� ���ʺ��� ���ʷ� ����
	res = ++a * 3;
	printf("res = %d\n", res); // a�� ���� ������Ű�� 3�� ���Ѵ�
	res = a > b && a !=5;
	printf("res = %d\n", res); // a > b�� ����� a != 5�� ����� &&����
	res = a % 3 == 0;
	printf("res = %d\n", res); // a % 3�� ���� 0�� ������ Ȯ��

	return 0;
}