//���� ��� - ��� �Լ��� �����ִ� �Լ����� ��� �޸𸮸� �Դ´ٴ� ������ �Լ��ʿ� ������ ���ִ� ������ �غ��� ���
#include <stdio.h>

int main()
{
    printf("%d",Factorial(5));
}

/*int factorial(int n)    //����
{
    int ;
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}*/

int FactorialTail(int n, int acc)    // acc : accumulator�� ����

{

    if (n == 1) return acc;

    return FactorialTail(n - 1, acc * n);    //  �Ϲ� ��Ϳ����� n * Factorial(n-1)�� �޸� ��ȯ������ �߰� ������ �ʿ�� ���� ����

}



int Factorial(int n)

{

    return FactorialTail(n, 1);

}