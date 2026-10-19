/*
 * main.c
 *
 *  Created on: Oct 19, 2026
 *      Author: Beshoy
 */

#include "stdio.h"

struct SStudent {
	char name[50];
	int roll;
	float marks;
};

int main ()
{
	struct SStudent s;

	printf ("Enter information of students:\n\n");

	printf ("Enter name: ");
	fflush (stdout);
	scanf ("%s", s.name);

	printf ("Enter roll number: ");
	fflush (stdout);
	scanf ("%d", &s.roll);

	printf ("Enter marks: ");
	fflush (stdout);
	scanf ("%f", &s.marks);

	printf ("\nDisplaying Information\n");
	printf ("name: %s\n", s.name);
	printf ("Roll: %d\n", s.roll);
	printf ("Marks: %.2f\n", s.marks);

	return 0;
}
