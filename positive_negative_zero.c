#include <stdio.h>
int main()
{
	int n; //here n means a number
	scanf("%d", &n);
	if (n > 0)
	{
		printf("number is positive");
	}
	else if (n < 0)
	{
		printf("number is negative");
	}
	else
	{
		printf("number is 0");
	}
	return 0;
}
