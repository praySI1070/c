// ������ �̹� ������ �Ǿ��ִ� ���, �ĺ��ڴ� ������ �빮�� �ҹ��� ���� _�� ���� ���� -> ������ ���ڷδ� ����
//�ּҸ� ������ ���� int*�ڿ� *�� ������ ������ �ٿ��� �����.
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);
	printf("�Էµ� �� : %d\n", a);

	int age;
	double height;

	//printf("���̿� Ű�� �Է��ϼ���: ");	//�Է� �ȳ� �޽��� ���
	//scanf("%d%lf", &age, &height);		//���̿� Ű�� �Բ� �Է�
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);
	printf("Ű�� �Է��ϼ���: ");
	scanf("%lf", &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);	//�Է°� ���

	if (a == 1)
		printf("1��");
	else if (a == 2)
		printf("2��");
	else
		printf("�ƹ��͵��ƴ�");	//if�� ������ : if�� else�� �ѹ��� ���, else if �� ������else�� else if���� �������� ����

	return 0;
}