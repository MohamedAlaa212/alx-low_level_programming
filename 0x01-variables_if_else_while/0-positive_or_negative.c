#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("put a number : ");
	scanf("%d", &n);
	if (n > 0)
	printf("%d is positive", n);
	if (n < 0)
	printf("%d is negative", n);
	if (n == 0)
	printf("%d is zero", n);
	return (0);
}
