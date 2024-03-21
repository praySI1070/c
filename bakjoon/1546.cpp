#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N,M,check,max;
	double sum = 0;
	scanf("%d", &N);
	if(N < 0 || N > 1000) {
		return 0;
	}
	int *arr = (int*)malloc(sizeof(int) * N);
	
	for(int i = 0; i<N; i++)
	{
		scanf("%d", (arr + i));
	}
	
	for(int i= 0; i<N ; i++)	//������ 0�� 100���̴�. 
	{
		if(*(arr + i) < 0 || *(arr + i) > 100) {
			return 0;
		}
	}
	
	for(int i =0; i<N; i++)	 // ��� �ϳ� �̻��� ������ 0�� �ƴϴ�. 
	{
		if(*(arr + i) == 0) {
			check ++;
		}
	}
	if(check == N) {
		return 0;
	}
	
	max = *(arr);
	for(int i=0; i<N-1; i++)	//�ִ밪 ���ϱ� ���Ѱ��� ���, �۵��� ���� 
	{
		if(max < *(arr+i+1)) {
			max = *(arr+i+1);
		}
	}

	if(N == 1) {
		max = *(arr);
	}
	
	for(int i =0; i<N; i++)
	{
		sum += (*(arr+i)) * 100.000 / max;
	}
	
	printf("%lf", sum / N);
	
	free(arr);
	
	return 0;
}
