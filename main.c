#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int mani()
{
	int a, b;
	char input;
	while(1){
		system("cls");
		printf("Running Calculator programing\n");
		printf("Press:\n");
		printf("+ for Addition\n");
		printf("- for Substraction\n");
		printf("* for multiplication\n");	
		printf("x for Exiting from program\n");
		if(input == 'x' || input == 'X')
		{
			return 0;
		}
			
		printf("Enter integer value a = ");
		scanf("%d", &a);
		printf("Enter integer value b = ");
		scanf("%d", &b);	
		switch(input)
		{
			case '+':
				printf("result of a+b = %d", add(a+b));
				break;
			case '-':
				printf("result of a-b = %d", sub(a-b));
				break;
			case '*':
				printf("result of a*b = %d", multiplication(a*b));
				break;
			default:
				printf("Invalid operation rquested\n");
				break;
		}
		printf("press enter, to try again\n");
		getch();	
	}
	return 0;
}
