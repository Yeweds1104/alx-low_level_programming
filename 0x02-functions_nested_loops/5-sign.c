
/**
 * main - prints the sign of a number
 * Return: 0 and prints 0 if it is zero
 * Return: 1 and prints + if it is positive
 * Return: -1 and prints - if it is negative
 *
**/

int print_sign(int n)
{

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}
