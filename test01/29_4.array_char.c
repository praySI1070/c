//���ڿ��� �迭�� ���� �ּҰ����̴�.
//�迭�� �迭�� ������ �ι��ڴ� ���� ���ΰ�? �� -> ���ڿ��� ù������ ������ �ι��ڱ����� ���ڿ��� ������ ����.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "applejam";
	char stt[5] = "+++";
	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� :");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);
	strcpy(str, stt);	//���ڿ� ���� �Լ�.
	puts(str);	//���ڿ� ���� ����Ʈf �Լ�

	return 0;
}