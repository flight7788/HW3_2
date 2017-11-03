#include <stdlib.h>
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{

	unsigned int n;

	printf("�п�J��N�ӶO��ż�:");
	scanf_s("%d", &n);
	printf("\n");
	printf("��N�ӶO��żƬ�: %d\n\n", fibonacci(n));

	system("pause");
	return 0;

}

unsigned long long int fibonacci(unsigned int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		unsigned long long int fib, n_1 = 0, n_2 = 1, i;

		for (i = 2; i <= n; i++) 
		{
			fib = n_1 + n_2;
			n_1 = n_2;
			n_2 = fib;
		}
		return fib;
	}
}