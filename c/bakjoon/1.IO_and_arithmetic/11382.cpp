#include <stdio.h>
#include <math.h>

int main()
{
	long long int A,B,C;
	double D = pow(10.0 , 12.0);
	scanf("%lld %lld %lld", &A, &B, &C);
	
	if(A >= 1 && B >= 1 && C <= D)	// �ڷ����� ũ�⸦ ��������. 
		printf("%lld", A+B+C);
		
	return 0;
}
