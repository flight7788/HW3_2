#include <stdlib.h>
#include <stdio.h>

char Case_conversion(char data);

int main(void)
{
	
	char key;
	printf("Please enter your key:");
	key = getchar();
	key = Case_conversion(key);
	printf("KEY:%c\n", key);
	system("pause");
	return 0;
}


char Case_conversion(char data)
{
	if (data >= 97)
	{
		data = data - 32;
	}
	else
	{
		data = data + 32;
	}
	
}
