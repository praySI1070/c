#include <stdio.h>

int main()
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;	//�������� �������
	post = (b++) * 3;	//�������� ���� ���� �Ŀ� �ݿ� ���ݽ��� b�� 5�� �����ٿ��� 6

	printf("�ʱⰪ a = %d\n, b = %d\n", a, b);
	printf("������: (++a)*3=%d, ������: (b++)*3=%d\n", pre, post);

	return 0;
}