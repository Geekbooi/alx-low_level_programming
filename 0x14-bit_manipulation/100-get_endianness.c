/*
 * File: 100-get_endianness.c
 */

#include "main.h"
/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	unsigned int n = 1;

	if (*(char *) &n == 1)
		return (1);
	return (0);
}
