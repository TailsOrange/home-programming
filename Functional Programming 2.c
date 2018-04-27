#include <stdio.h>
#include <stdlib.h>

int smallest (int x, int y);

int main(void)
{
	int n= smallest(45,-456);
	printf("n=%d\n",n);
	system("pause");
}

int smallest(int x,int y)
{
	int minVal;
	if (x<y)
	minVal=x;
		else
		minVal=y;
		
		return minVal;
}
