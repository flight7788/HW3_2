#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int a, int b, int c);

int main(void)
{
	int n;

	printf("請輸入幾個碟子：");
	scanf_s("%d", &n);
	hanoi(n, 1, 2, 3);

	system("pause");
	return 0;
}


void hanoi(int n, int a, int b, int c)
{
	if (n == 1)
	{
		printf("%d --> %d\n",a,c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("%d --> %d\n",a,c);
		hanoi(n - 1, b, a, c);
	}
}