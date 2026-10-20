/*
 * main.c
 *
 *  Created on: Oct 20, 2026
 *      Author: Beshoy
 */

#include "stdio.h"

struct SComplex {
	float real;
	float imag;
};

struct SComplex Read_Complex (int index)
{
	struct SComplex c;

	printf ("For %s complex number\n", (index == 1) ? "1st" : "2nd");
	printf ("Enter real and imaginary respectively: ");
	fflush (stdout);
	scanf ("%f %f", &c.real, &c.imag);

	return c;
}

struct SComplex Add_Complex (struct SComplex a, struct SComplex b)
{
	struct SComplex result;

	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;

	return result;
}

int main ()
{
	struct SComplex n1, n2, sum;

	n1 = Read_Complex (1);
	printf ("\n");
	n2 = Read_Complex (2);

	sum = Add_Complex (n1, n2);

	printf ("Sum=%.1f+%.1fi\n", sum.real, sum.imag);

	return 0;
}
