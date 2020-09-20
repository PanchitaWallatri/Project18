#include<stdio.h>
int main()
{
	int num, count = 0, i;
	printf("=== Prime Number Checking Program ===\n");
	printf("Enter Number : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
		if (num % i == 0) count++;
	if (count == 2)
		printf("Result : %d is prime number\n", num);
	else
		printf("Result : %d is not prime number\n", num);
	return 0;
}