#include<stdio.h>
#define SIZE 10
int sump(int *start, int *end);
int main(void)
{
	int m[SIZE]={20,10,5,39,4,16,19,26,31,20};
	long answer;

	answer = sump(m, m + SIZE);
	printf("total m is %ld.\n", answer);
	system("pause");
	return 0;
	
}

int sump(int *start, int *end)
{
	int total = 0;
	while (start < end) 
	{
		total += *start;
		start++;

	}
	return total;
}
