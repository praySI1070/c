#include <stdio.h> //stdio.h�� ����� �Լ��� �ҷ���

int main() // �Լ��� ���� <��ȯ�� / �Լ��̸� / �Ű�����>�� �Ǿ��ִ�. int�� ��ȯ�� main�� �Լ��̸� ()�ȿ��� ����
{
	
	printf("1234578901234567890\n");	// 12345678901234567890����Ʈ �� ����
		printf("Be happy\n");			// Be happy ��� �� ����
		printf("My\tfriend\n");			// My tab��ŭ �پ�� friend ��� �� ����
		printf("Goot\bd\tchance\n");	// Goot���� t�� d�� �ٲٰ� tab�ϰ� chance ��� �� ����
		printf("Cow\rW\a\n");			// Cow���� ���Ͼչ��ڸ� W�� ��ü�� �˶� �� ����


		printf("%d\n", 10);
		printf("%lf\n", 3.4);					//�Ǽ��� ǥ��
		printf("%.1lf\n", 3.45);				//�Ǽ� �Ʒ� ���ڸ�ǥ��
		printf("%.10lf\n", 3.12345678901);		//�Ǽ��Ʒ� ���ڸ����� ǥ��

		printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
		printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
		
		printf("%c\n", 'A');		//%c�� ���ڸ� ����
		printf("%d\n", 'A');		//A�� �ƽ�Ű�ڵ�� 65��
		printf("%d\n", 'a');		//a�� �ƽ�Ű�ڵ�� 97��
		printf("%c\n", 65);			//�ݴ�� ���ڸ� ���ڷε� �ٲ�
		printf("%s\n", "A");		//%s�� ���ڿ��� ����
		printf("%c�� %s�Դϴ�.", '1', "first");

}
