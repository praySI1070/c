#include <stdio.h>

void fruit();

int main()
{
	fruit(1);

	return 0;
}

void fruit(int n)		//����Լ��� �Լ��� ������ ���� ���¿��� ���� �Լ��� ȣ���ϹǷ� ȣ��� �Լ��� ������ �ȴٸ�, fruit(2)�� 16���� �ٷ� ���ư��� �ȴ�.
{
	printf("apple\n");
	if (n == 3) return;
	fruit(n+1);
}