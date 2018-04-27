#include <stdio.h>
#include <stdlib.h>

double temperature;

void measure(void);
int func(void);
void funcByRef(int *i,int *j);

int main(void)
{
	int n= func();
	printf("After func(), n=%d\n",n);
	measure();
	printf("After measure(), Temperature= %.1lf\n", temperature);
	
	int a,b; //not initialized delibrately
	funcByRef(&a,&b);
	printf("After funcByRef(), a=%d b=%d\n",a,b);
	system("pause");
	return(0);
}


int func(void)
{
	int value=12;
	return value; //simply returns value.
}

void measure(void)
{
	temperature=50.2; //function "measure" modifies global variable.
}

void funcByRef(int *i, int *j) //modifies values passed to parameters via references to pointer. receives two values passed by reference.
{
	*i=5;
	*j=7;
}
