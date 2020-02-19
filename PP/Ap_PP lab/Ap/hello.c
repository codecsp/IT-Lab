#include<stdio.h>
int main()
{
	#pragma omp parallel
	{
		printf("hello soham !\n");
	}
}
