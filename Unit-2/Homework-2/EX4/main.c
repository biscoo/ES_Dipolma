/*
 * main.c
 *
 *  Created on: Aug 27, 2026
 *      Author: Beshoy
 */

#include<stdio.h>

void main() {

	int i, n, m, l;
	printf("Array insertion\n"
			"###############\n");
	again: printf("Enter the array size: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	if (n <= 0) {
		printf("Invalid, enter values > 0\n");
		goto again;
	}
	int data[n + 1];
	printf("Enter the elements of the Array\n");
	for (i = 0; i < n; i++) {
		printf("Element %d:", i + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &data[i]);
	}
	for (i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	printf("Enter the element to be inserted\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &m);

	element: printf("Enter the location of element\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &l);
	if (l <= 0 || l > n) {
		printf("Invalid, enter values between 1 and %d\n", n);
		goto element;
	}
	for (i = n; i > l - 1; i--) {
		data[i] = data[i - 1];
	}
	data[l - 1] = m;
	printf("Array after insertion:\n");
	for (i = 0; i < n + 1; i++)
		printf("%d ", data[i]);
	printf("\n");
}

