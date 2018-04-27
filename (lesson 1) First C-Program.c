#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int aNumber;
	printf("please enter a number\n"); //displays a message to prompt a number
	scanf("%d", &aNumber ); //scans for the input
	puts("You entered a number\n"); // puts the number in the statement
	printf("You entered %d\n", aNumber);
	getchar();
	return (0);
	
	
}
