#include <stdio.h>

int main()
{
	int income = 0;		//�ҵ�� �ʱ�ȭ
	double tax;			// ����
	const double tax_rate = 0.12;	//���� �ʱ�ȭ , double�� �Է��� ���� ������ ���� �ҽǵ� �� ����.
	//const�� ���� �����ϸ� ���Ŀ��� ���� ������ �� ����.
	//double tax_rate = 0.15 -> �Ŀ� ���� �����ϴ��� �ٲ�������.

	income = 456;		//�ҵ�� ����
	tax = income * tax_rate;	//���ݰ��
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;
}