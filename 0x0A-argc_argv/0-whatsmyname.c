#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 *
 * Return: 0 Always(success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}
