//���۴� �޸𸮿� �ִ� �ӽ� ���� ����
//����� ������ �̸� ���� ����ϴ� �Լ�
//ffluh�Լ��� ���� ��� �Ұ� (ȣ�ϼ�����)
//while(getchar()!='\n');����ϴ°� ���� ����(������)
//scanf�Լ��� ȣ�� ��� ���ۿ��� �����͸� ������

#include <stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)		//3�������� ���ۿ� �ȳ�����, ������ ����
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	while (getchar() != '\n');	//���ۿ��� ����
	printf("\n");

	scanf("%c", &ch);	//�ٽ��Է�
	printf("%c", ch);

	return 0;
}