#include <stdio.h>
#include <stdlib.h>

int Fibonacci (int n)

{
	//printf("n=%d\n",n);
	if (n==0)
	return 0;
	else if (n==1)
	return 1;
	else return Fibonacci(n-1)+Fibonacci(n-2);
}

void generateFibonacci(int numbers)
{
	//first <numbers> in the series
	
	int n=0;
	for (int i=0;i<numbers;i++)
	{
		printf("[%5d]:%15d\n",n,Fibonacci(n));
		n=n+1; //or n++
	}
}

int main(void)
{
	generateFibonacci(45);
	printf("\n-------------------------\n");
	generateFibonacci(10);
	system("pause");
	return(0);
}
