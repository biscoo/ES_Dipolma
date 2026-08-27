/*
 * test.c
 *
 *  Created on: Aug 27, 2026
 *      Author: Beshoy
 */

#include<stdio.h>

void main() {

	int i, n, m, f=0;
	printf("Array Search (Linear)\n"
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
	printf("Enter the element to be searched: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &m);

	for(i=0;i<n;i++){ //Linear Search
		if (data[i]==m){
			printf("Number found at location %d\n", i+1);
			f=1;
    }
	}
	if(!f)
		printf("Number not found....");
}

