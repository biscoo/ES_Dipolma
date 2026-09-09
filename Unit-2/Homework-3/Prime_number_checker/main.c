/*
 * main.c
 *
 *  Created on: Sep 9, 2026
 *      Author: Beshoy
 */

#include<stdio.h>
#include<string.h>

int isPrime(int n, int m);

void main() {

	int i = 0, j = 0;
	printf("Please enter 2 numbers (Interval): \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &i, &j);

	isPrime(i, j);
}

int isPrime(int n, int m) {
	if (n <= 0) {
		return 0;
	} else {
		int i = 0, j = 0;
		int counter = 0;
		int arr_prime[20] = { 0 };

		for (i = n + 1; i < m; i++) {
			if (i < 2)
				continue;
			int is_prime = 1;
			for (j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					is_prime = 0;
					break;
				}
			}

			if (is_prime) {
				arr_prime[counter] = i;
				counter++;
			}
		}

		if (counter > 0) {
			printf("The prime numbers between %d and %d: ", n, m);
			for (i = 0; i < counter; i++) {
				printf("%d\t", arr_prime[i]);
			}
		}
	}
}
