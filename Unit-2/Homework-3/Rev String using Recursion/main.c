/*
 * main.c
 *
 *  Created on: Sep 19, 2026
 *      Author: Beshoy
 */

#include<stdio.h>
#include<string.h>

char string_reverse(char arr1[], char arr2[], int n, int m);

void main() {

	int j = 0, i = 0;
	char arr[100] = "";
	char rev_arr[100] = "";
	printf("Please enter a sentence: \n");
	fflush(stdin);
	fflush(stdout);
	gets(arr);
	printf("The entered string is: %s\n", arr);
	j = strlen(arr)-1;
	string_reverse(arr, rev_arr, j, i);
	printf("The reverseI  of entered sentence is : %s", rev_arr);
}

char string_reverse(char arr1[], char arr2[], int n, int m) {
	int j = n;
	int i = m;
	if(n>=0){
	arr2[i++]=arr1[j--];

	string_reverse(arr1, arr2, j, i);
	}

	return 0;
}
