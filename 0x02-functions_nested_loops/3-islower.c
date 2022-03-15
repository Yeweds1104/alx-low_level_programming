
/**
 * main - checks if the given letter is lower case or not
 * Return: 0 if it is not lowercase
 * Return: 1 if it is lowercase
 *
**/

int _islower(int c)
{

	if(islower(c) > 0)
		return (1);
	else
		return (0);

}
