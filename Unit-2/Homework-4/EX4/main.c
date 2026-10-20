/*
 * main.c
 *
 *  Created on: Oct 20, 2026
 *      Author: Beshoy
 */

#include "stdio.h"

#define NUM_OF_STUDENTS 10

struct SStudent {
	char name[50];
	int roll;
	float marks;
};

int main ()
{
	struct SStudent students[NUM_OF_STUDENTS];
	int i;

	printf ("Enter information of students:\n");

	for (i = 0; i < NUM_OF_STUDENTS; i++)
	{
		students[i].roll = i + 1;

		printf ("\nFor roll number %d\n", students[i].roll);
		printf ("Enter name: ");
		fflush (stdout);
		scanf ("%49s", students[i].name);
		printf ("Enter marks: ");
		fflush (stdout);
		scanf ("%f", &students[i].marks);
	}

	printf ("\nDisplaying information of students:\n");

	for (i = 0; i < NUM_OF_STUDENTS; i++)
	{
		printf ("\nInformation for roll number %d:\n", students[i].roll);
		printf ("Name: %s\n", students[i].name);
		printf ("Marks: %g\n", students[i].marks);
	}

	return 0;
}
