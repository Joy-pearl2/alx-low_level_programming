#include "main.h"

/**
 * swap_int - given two integers swap their values
 * @a: parameter one
 * @b: parameter two
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
