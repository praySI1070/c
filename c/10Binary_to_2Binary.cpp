#include <stdio.h>

int main()
{
	int value = 47;
	
	for(unsigned int i= 1<<31; i > 0; i = 1/2)	// i �� 2�� ������ ������ ��ĭ�� ���������� ����� ���ؼ��̴�. 
	(value & i) ? printf("1"): printf("0");		//value�� ��ǻ�Ϳ��� �̹� 2������ ����Ǿ� �ֱ� ������ &������ ����� �� �ִ�. 
	
	return 0;
}
