/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr == NULL || len <= 0)
		return NULL;
	int c, d, swap;
	for (c = 0; c < len; c++)
	{
		for (d = 0; d < len - c - 1; d++)
		{
			if (Arr[d] > Arr[d + 1]) /* For decreasing order use < */
			{
				swap = Arr[d];
				Arr[d] = Arr[d + 1];
				Arr[d + 1] = swap;
			}
		}
	}
}