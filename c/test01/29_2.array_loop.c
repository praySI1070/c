#include <stdio.h>

int main()
{
	int score[5];
	int i;
	int tot = 0;
	double avg;

	//for (i = 0; i < 5; i++)
	//{
	//	scanf("%d", &score[i]);
	//}

	for (i = 0; i < 5; i++)
	{
		scanf("%d", score + i);    // score ��ü�� �ּ��̹Ƿ� �̷��� ����ص� �ȴ�.
	}

	for (i = 0; i < 5; i++)
	{
		tot += score[i];
	}
	avg = tot / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);    //%5d�� 5ĭ�� ����� ���� ���������� �����Ѵ�. ---80/---95
	}								//%-5d�� ���ʺ��� �����Ѵ�. (5ĭ ����� �� �Ȱ���.)
	printf("\n");

	printf("%.1lf\n", avg);

	return 0;
}