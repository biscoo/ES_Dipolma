/*
 * main.c
 *
 *  Created on: Sep 19, 2026
 *      Author: Beshoy
 */

#include<stdio.h>
#include<string.h>

int power(int n, int m);

void main() {

	int j = 0, i = 0;

	printf("Please enter a number: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &i);

	printf("Please enter a power(positive): \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &j);

	while (j < 0) {
		printf("Invalid, Please enter a power(positive): \n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &j);
	}
	printf("The Number %d to the power %d is: %d", i, j, power(i, j));

}

int power(int n, int m) {
	int i = n, j = m;
	if (j > 0) {
		i *= power(i, --j);
	} else {
		return 1;
	}
	return i;
}

