/*
 * main.c
 *
 *  Created on: Oct 20, 2026
 *      Author: Beshoy
 */

#include "stdio.h"

struct SDistance {
	int feet;
	float inch;
};

struct SDistance Read_Distance (int index)
{
	struct SDistance d;

	printf ("Enter information for %s distance\n", (index == 1) ? "1st" : "2nd");
	printf ("Enter feet: ");
	fflush (stdout);
	scanf ("%d", &d.feet);
	printf ("Enter inch: ");
	fflush (stdout);
	scanf ("%f", &d.inch);

	return d;
}

int main ()
{
	struct SDistance d1, d2, sum;

	d1 = Read_Distance (1);
	printf ("\n");
	d2 = Read_Distance (2);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	/* every 12 inches = 1 foot */
	while (sum.inch >= 12.0)
	{
		sum.inch -= 12.0;
		sum.feet++;
	}

	printf ("\nSum of distances=%d'-%.1f\"\n", sum.feet, sum.inch);

	return 0;
}
