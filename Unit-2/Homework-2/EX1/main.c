/*
 * test.c
 *
 *  Created on: Aug 27, 2026
 *      Author: Beshoy
 */

#include<stdio.h>

void main() {

	float mat1[2][2];
	float mat2[2][2];
	float sum[2][2];
	printf("Matrix 2x2 Summation\n###################\n");
	int i;
	int j;
	printf("Enter the elements of Matrix 1\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter a%d%d: ", i + 1, j + 1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &mat1[i][j]);
		}
	}
	printf("Enter the elements of Matrix 2\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter a%d%d: ", i + 1, j + 1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &mat2[i][j]);
		}
	}
	printf("The Sum of the 2 matrices:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			sum[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
				printf("%.2f\t", sum[i][j]);
		}
		printf("\n");
	}
}
