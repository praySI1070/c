//������ ũ�� Ȯ��, �޸� ���� �Ҵ� �۾� ���
#include <stdio.h>

int main()
{
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof(a));
	printf("double�� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof(1.5+3.4));
	printf("char�� �ڷ����� ũ�� : %d\n", sizeof(char));

	int c = 10, d = 20;
	int res = 2;

	c += 20;		//a�� 20�� ���� ����� �ٽ� a�� ����
	res *= d + 10;	//b�� 10�� ���� ������� res�� ���ϰ� �ٽ� res�� ���� -> ��������� �������� �����̱� ���ȿ� +10�� �������� ������ ����.

	printf("a = %d, b =%d\n", c, d);
	printf("res = %d\n", res);


	return 0;
}