//

#include <stdio.h>
//�迭���� �ּһ�������� ���Կ������ʿ� ���Ұ� (lvalue)
#include <string.h>

int main()
{
	char fruit[20] = "strawberry";	//strawberry�ʱ�ȭ

	printf("%s\n", fruit);	//strawberry ���
	strcpy(fruit, "banana");	//fruit�� banana����(���ʿ� �߰��� �ƴ϶� �����
	printf("%s\n", fruit);	//banana���

	return 0;
}