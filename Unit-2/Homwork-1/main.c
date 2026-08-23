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
	x = 0;
	y = 0;

	while (c) {
		x = 0;
		y = 0;
		printf("Enter exercise number (1-6) to see the output or 8 to exit: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &x);
		switch (x) {
		case 1: {
			printf("###########################\nC Programming\n"
					"###########################\n");
			fflush(stdin);
			fflush(stdout);
			break;

		}
		case 2: {
			printf("Enter a integer: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &y);
			printf("You entered: %d\n", y);
			break;
		}
		case 3: {
			printf("Enter integer 1: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &x);
			printf("Enter integer 2: ");
			fflush(stdin), fflush(stdout);
			scanf("%d", &y);
			printf("SUM = %d\n", x + y);
			break;
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
			break;
		}
		case 5: {
			char (x);
			printf("Enter a character: ");
			fflush(stdin), fflush(stdout);
			scanf("%c", &x);
			printf("ASCII value of %c = %d\n", x, x);
			break;

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
			break;
		}

		case 8: {
			c = 0;
			break;
		}
		default:
			printf("Invalid choice, please try again.\n");
		}

	}
}
