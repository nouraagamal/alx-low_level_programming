#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - Adds two numbers
*
* @a: A number1
*
* @b: A number2
*
* Return: Sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Calculates the difference of 2 numbers
*
* @a: A number1
*
* @b: A number2
*
* Return: Difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiplies two numbers
*
* @a: A number1
*
* @b: A number2
*
* Return: Product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides @a by @b
*
* @a: A number1
*
* @b: A number2
*
* Return: Result of the division
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Calculates the remainder of a divided by b
*
* @a: A number1
*
* @b: A number2
*
* Return: Remainder
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
