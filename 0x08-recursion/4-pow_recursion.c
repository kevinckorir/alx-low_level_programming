#include "main.h"

/**
* _pow_recursion - calculates the value of x raised to y
* @x: first integer param
* @y: second intger param
* Return: integer x raised to power y
*/
int _pow_recursion(int x, int y)

{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
