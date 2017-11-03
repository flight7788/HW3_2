#include <stdlib.h>
#include <stdio.h>

int Power(int base, int exponent);

int main(void)
{
	int a, b;
	printf("Please enter your base:");
	scanf_s("%d",&a);
	printf("Please enter your exponent(>=1):");
	scanf_s("%d", &b);
	printf("%d^%d = %d\n", a, b, Power(a,b));
	system("pause");
	return 0;
}


int Power(int base, int exponent)
{
	int pow;
	if (exponent == 1)
	{
		return base;
	}
	else if (exponent > 1)
	{
		pow = base*Power(base, exponent - 1);
	}
	return pow;
}