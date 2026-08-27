/*
 * test.c
 *
 *  Created on: Aug 27, 2026
 *      Author: Beshoy
 */

#include<stdio.h>

void main() {

	int n;
	float sum = 0;
	int i;
	printf("Average Calculator\n###################\n");
	again: printf("Enter the number of data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	float data[n];
	if (n <= 0) {
		printf("Invalid, enter a number > 0\n");
		goto again;
	}
	for (i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &data[i]);
		sum += data[i];
	}
	printf("The average value of data is: %.3f\n", sum / n);

}

