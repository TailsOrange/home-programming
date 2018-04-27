#include <stdio.h>
#include <stdlib.h>
void func1(int array[]);
void func2(int *array);

int main(void)
{
	int list[5]={5,7,9,23,15};
	func1(list);
	func2(list);
	system("pause");	
	return(0);
}

void func1(int array[])
{
	printf("array[3] is %d\n",array[3]); //difference in definition only.
}

void func2(int *array)
{
	printf("array[3] is %d\n",array[3]);
	
}
