//�ּҰ��� ũ��� � ü���� ���ؼ� �����ȴ�.  64��Ʈ�� 8����Ʈ
#include <stdio.h>

int main()
{
	int a;
	double b;
	char c;
	int d;
	int* pd;

	pd = &d;
	d = 10;

	printf("int�� ������ �ּ� : %u\n", &a);	//%x�� %xp�� ����ϸ� 16�����ε� ǥ�ð� �����ϴ�.
	printf("couble�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);
	printf("�����ͷ� d�� �� ��� : %d\n ", *pd);	//�������� ������ *pd = d�� ��
	printf("d�� �� ��� : %d\n", d);

	return 0;
}