#include <stdio.h>

int main()
{
	int score[5];
	int i;
	int tot = 0;
	double avg;
	int cnt;

	cnt = sizeof(score) / sizeof(score[0]);		//�迭 ��� �� ���

	for (i = 0; i < cnt; i++)
	{
		scanf("%d", score + i);
	}

	for (i = 0; i < cnt; i++)
	{
		tot += score[i];
	}
	avg = tot / (double)cnt;		//(double)�� ���� ������ avg�� �Ǽ��ε� tot�� cnt�� ���� �����̹Ƿ� �Ǽ� ������ �����ϱ� ���ؼ� �ϳ��� �Ǽ��� ��ȯ�ؼ� ���.

	for (i = 0; i < cnt; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("%.1lf\n", avg);

	return 0;
}