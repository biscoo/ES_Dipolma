/*
 * test.c
 *
 *  Created on: Aug 27, 2026
 *      Author: Beshoy
 */

#include<stdio.h>

void main() {

	int n, m;
	int i, j;
	printf("Matrix Transpose Calculator\n"
			"###########################\n");
	again: printf("Enter the Matrix dimensions: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &n, &m);
	if (n <= 0 || m <= 0) {
			printf("Invalid, enter values > 0\n");
			goto again;
		}
	float data[n][m];
	float t_data[m][n];


	printf("Enter the elements of the Matrix\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("Element a%d%d: \n", i + 1, j + 1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &data[i][j]);
			t_data[j][i] = data[i][j];
		}
	}
	printf("The Entered Matrix is:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%.2f\t", data[i][j]);
		}
		printf("\n");
	}
	printf("The Transpose Matrix is:\n");
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf("%.3f\t", t_data[i][j]);
			}
			printf("\n");
		}

}

