/*
 * main.c
 *
 *  Created on: Aug 22, 2026
 *      Author: Beshoy
 */
#include <stdio.h>
void main() {
	int x = 0;
	int y = 0;
	char c = 1;
	repeat: x = 0;
	y = 0;
	printf("Enter exercise number (1-6) to see the output or 8 to exit: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	while (c) {
		switch (x) {
		case 1: {
			printf("###########################\nC Programming\n"
					"###########################\n");
			fflush(stdin);
			fflush(stdout);
			goto repeat;
		}
		case 2: {
			printf("Enter a integer: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &y);
			printf("You entered: %d\n", y);
			goto repeat;
		}
		case 3: {
			printf("Enter integer 1: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &x);
			printf("Enter integer 2: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &y);
			printf("SUM = %d\n", x + y);
			goto repeat;
		}
		case 4: {
			float (x);
			float (y);
			printf("Enter number 1: ");
			fflush(stdin), fflush(stdout);
			scanf("%f", &x);
			printf("Enter number 2: ");
			fflush(stdin), fflush(stdout);
			scanf("%f", &y);
			printf("MUL = %f\n", x * y);
			goto repeat;
		}
		case 5: {
			char (x);
			printf("Enter a character: ");
			fflush(stdin), fflush(stdout);
			scanf("%c", &x);
			printf("ASCII value of %c = %d\n", x, x);
			goto repeat;

		}
		case 6: {
			printf("Enter value of a: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &x);
			printf("Enter value of b: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &y);
			x = x + y;
			y = x - y;
			x = x - y;
			printf("After swapping, value of a = %d\n", x);
			printf("After swapping, value of b = %d\n", y);
			goto repeat;
		}

		case 8:
			c = 0;
		}

	}
}
