#include <stdlib.h>
#include <stdio.h>

int lcm(int num1, int num2);

int main(void) 
{
	int a, b;

	printf("�п�J��Ӿ��(��>0)�G");
	scanf_s("%d %d", &a, &b);
	printf("�̤p�����ơG%d\n", lcm(a, b));

	system("pause");
	return 0;
}


int lcm(int num1, int num2)
{
	int i,lcm;

	for (i = 1; i <= num1; i++)
	{
		if (num1%i == 0)
		{
			if (num2%i == 0)
			{
				lcm = num1*num2 / i;
			}
		}
	}
	return lcm;
}