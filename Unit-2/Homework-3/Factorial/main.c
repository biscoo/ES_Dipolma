/*
 * main.c
 *
 *  Created on: Sep 19, 2026
 *      Author: Beshoy
 */

#include<stdio.h>
#include<string.h>

int factorial(int n);

void main() {

	int i = 0, j = 0;
	printf("Please enter positive integer: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &i);

	while (i < 0) {
		printf("Invalid input, please enter positive integer: \n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &i);

	}

	j = factorial(i);
	printf("The Factorial of %d is: %d", i, j);
}

int factorial(int n) {
	int f = 1;
	if (n > 0) {
		f = n * factorial(n - 1);
	}
	return f;
}
