#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[] = "Expect the best. Capitalize on what comes\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
