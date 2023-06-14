#include <stdio.h>

/**
 * add_num - adds two numbers
 * @a: first int
 * @b: second int
 * Return: the sum
 */

int add_num(int a, int b)
{
	return (a + b);
}
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int sum = add_num(5, 6);

	printf("the sum is : %d\n", sum);
	return (0);
}
