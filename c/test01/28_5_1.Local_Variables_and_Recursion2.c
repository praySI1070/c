#include <stdio.h>

void fruit(int n);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int n)		//�������� ������ ���� ���� n�� 3�� �ǹǷ� return���� �Լ��� ����Ǽ� 3���� jam�� ������ �ʴ´�.
{
	printf("apple");
	if (n == 3) return 0;
	printf("jam\n");
	fruit(n + 1);
}