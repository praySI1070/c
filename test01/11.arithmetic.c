// ++a�� ��� ����, a++�� ;���Ŀ� ����ȴ�.
// >>1�� ��Ʈ �̵� �����ڷμ� ��ĭ ������ �δ�. ex) 0000 0110 -> 0000 0011
//xor �ٸ����� ��

#include <stdio.h>

int main()
{
	int a, b;
	int sum, sub, mul;
	unsigned int inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a�� �� :%d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� ������� : %u\n", inv);

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;	//�Ǽ��� �Ǽ��� ������ ����
	banana = 5 / 2;		//������
	orange = 5 % 2;		//������

	printf("apple: %.1lf\n", apple);
	//printf("apple: %.1lf\n", (int)apple);   �տ� (int)�� ���̸� �� ���� �ڷ����� ���� �ڷ����� �ȴ�.
	printf("banana: %d\n", banana);
	printf("orange: %d\n", orange);


	++a;
	--b;

	printf("a : %d\n", a);
	printf("b : %d\n", b);


	return 0;
}
