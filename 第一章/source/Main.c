#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("��J��Ӿ�Ʊo������Y\n");
	scanf_s("%d%d", &num1, &num2);

	if (num1 == num2)
	{
		printf("%d �� %d�۵�\n", num1, num2);
	}
	if (num1 != num2)
	{
		printf("%d �� %d���۵�\n", num1, num2);
	}
	if (num1 < num2)
	{
		printf("%d �p�� %d\n", num1, num2);
	}
	if (num1 > num2)
	{
		printf("%d �j�� %d\n", num1, num2);
	}
	if (num1 >= num2)
	{
		printf("%d �j�󵥩� %d\n", num1, num2);
	}if (num1 <= num2)
	{
		printf("%d �p�󵥩� %d\n", num1, num2);
	}

	system("pause");
	return 0;
}