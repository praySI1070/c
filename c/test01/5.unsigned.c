// unsigned �Ű������� %d���ƴ϶� %u(char short int)�� %llu(long long)
// ���� �հ� �Ѿ�� 2�Ǻ����γ���
// ���� ���� ���� %d�� ���� ��ȣ(+-)��Ʈ�� ���̰� %u�� ���̸� �����ͺ�Ʈ�� ���δ�.
#include <stdio.h>

int main()
{
	unsigned int a;
	a = 4294967295;	//ū ��� ����
	printf("%d\n", a);	//%d�� ���
	a = -1;			// ���� ����
	printf("%u\n", a);	//%u�� ���

	return 0;
}