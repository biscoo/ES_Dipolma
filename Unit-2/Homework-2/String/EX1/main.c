/*
 * main.c
 *
 *  Created on: Aug 28, 2026
 *      Author: Beshoy
 */

#include<stdio.h>

void main() {

	int i, n = 0, str_length = 0;
	char c;
	char text[100], rev[100];
	printf("String Char Frequency Search (Linear)\n"
			"#####################################\n");
	printf("Enter a String: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);

	printf("Enter a char to be found: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &c);
	for (i=0;;i++){
		if(text[i] !='\0')
			str_length+=1;
		else
			break;
	}
	for (i = 0; i < str_length; i++) {
		if (text[i] == c)
			n += 1;
		rev[i]=text[str_length-1-i];
	}
	rev[str_length]='\0';
	printf("Frequency of the char %c: %d\n", c, n);
	printf("The string length: %d\n", str_length);
	printf("The reverse of the string: %s\n", rev);

}

