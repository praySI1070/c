#include <stdio.h>

int main()
{
	char grade;
	char name[20];
	//���ڸ� �ް� ������ ���� �ִ� ���͸� ���ڿ����� ���� �޾ƹ����⋚���� > ȭ��Ʈ �����̽���� ���ۿ��� ���� �ް�, ���ڸ� �ް� �� �ȴ�.
	printf("�̸� �Է�: ");
	scanf("%s", name);
	/*printf("���� �Է�: ");
	scanf(" %c", &grade);*/	
	printf("���� �Է�: ");
	getchar();
	scanf("%c", &grade);
						// getchar�Լ��� �Ἥ�� ����ϰ� ����� �� �ִ�.

	/*printf("�̸� �Է�: ");
	scanf("%s", name);*/
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);


	return 0;
}