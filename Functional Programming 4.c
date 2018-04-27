#include <stdio.h>
#include <stdlib.h>

void someFunction(int a, int b);
void someOtherFunction(int *a,int *b);


int main(void)
{
	printf("------------By Value-------------\n");
	int x=0;
	int y=0;
	printf("Before function call: x=%d y=%d\n",x,y);
	someFunction(x,y);
	
	printf("After function call: x=%d y=%d\n",x,y);
	
	printf("\n--------By Reference----------\n");
	
	x=0;
	y=0;
	
	printf("Before function call: x=%d y=%d\n",x,y);
	someOtherFunction(&x,&y);
	printf("After function call: x=%d y=%d\n",x,y);
	system("pause");
}

void someFunction(int a, int b)
{
	printf("in function recieved: a=%d b=%d\n",a,b);
	a=111;
	b=222;
	printf("in function modified: a=%d b=%d\n",a,b);
}

void someOtherFunction(int *a, int *b)
{
	printf("in function recieved: a=%d b=%d\n",*a,*b);
	*a=111;
	*b=222;
	printf("in function modified: a=%d b=%d\n",*a,*b);
}
