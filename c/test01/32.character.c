#include <stdio.h>

int main()
{
	int ch;

	printf("���� a�� �ƽ�Ű �ڵ� �� : %d\n", 'a');
	printf("�ƽ�Ű �ڵ尪�� 97�� ���� : %c\n", 97);
	printf("���� ����� ũ�� : %d����Ʈ\n", sizeof('a'));

	ch = 'a';
	ch++;
	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch, ch);

	return 0;
}