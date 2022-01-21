#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("块ㄢ俱计眔ㄢ计闽玒\n");
	scanf_s("%d%d", &num1, &num2);

	if (num1 == num2)
	{
		printf("%d 蛤 %d单\n", num1, num2);
	}
	if (num1 != num2)
	{
		printf("%d 蛤 %dぃ单\n", num1, num2);
	}
	if (num1 < num2)
	{
		printf("%d  %d\n", num1, num2);
	}
	if (num1 > num2)
	{
		printf("%d  %d\n", num1, num2);
	}
	if (num1 >= num2)
	{
		printf("%d 单 %d\n", num1, num2);
	}if (num1 <= num2)
	{
		printf("%d 单 %d\n", num1, num2);
	}

	system("pause");
	return 0;
}