#include <stdio.h>
#include <stdlib.h>
double func(double,double);//prototype


int main(void)
{
	double result= func(10,20);
	printf("result=%.2lf\n",result);
	
	system("pause");
}

double func(double x,double y)
{
	return (x*y);
}
