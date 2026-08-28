/*
 * test.c
 *
 *  Created on: Aug 28, 2026
 *      Author: Beshoy
 */

#include<stdio.h>
#include<string.h>

void main() {

	int i, n=0;
	char c;
	char text[100];
	printf("String Char Frequency Search (Linear)\n"
			"#####################################\n");
	printf("Enter a String: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);

	printf("Enter a char to be found: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);

	for(i=0;i<strlen(text);i++){
		if(text[i]==c)
			n+=1;
	}
	printf("Frequency of the char %c: %d", c,n);
}

