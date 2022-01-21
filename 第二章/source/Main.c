#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int counter = 0, grade, total = 0, average;
	
	while (counter < 10)
	{
		printf("Enter grade:");
		scanf_s("%d", &grade);
		total = total + grade;
		counter++;
	}

	average = total / counter;
	printf("class average is %d\n", average);

	system("pause");
	return 0;
}