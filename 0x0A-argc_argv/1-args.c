#include <stdio.h>
#include "main.h"

/**
 * main - print  exact number for a string
 * @argc: counts the number of arg
 * @argv: arrays for the arg
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
