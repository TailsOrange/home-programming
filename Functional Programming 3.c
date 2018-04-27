#include <stdio.h>
#include <stdlib.h>

void changeNumber (int a);
void changeNumberDifferently(int a);

//global variables
int a=0;
int b=0;
int c=0;

int main(void)
{
	printf("in Main, a= %d\n",a);
	changeNumber(a);
	printf("in Main,a= %d\n",a);
	
	changeNumberDifferently(a);
	printf("in Main,a= %d\n",a);
	printf("in Main,b= %d\n",b);
	printf("in Main,c= %d\n",c);
	system("pause");
	return(0);
}

void changeNumber(int a)
{
	a=5;
	printf("inside changeNumber, a= %d\n",a);
}

void changeNumberDifferently(int a)
{
	a=-1;
	b=3;
	int c=-1; //internal or local variable.
	printf("inside changeNumberDifferently, a= %d\n",a);
	printf("inside changeNumberDifferently, b= %d\n",b);
	printf("inside changeNumberDifferently, c= %d\n",c);
	
}
