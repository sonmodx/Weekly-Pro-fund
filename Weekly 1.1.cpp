#include <stdio.h>
int main ()
{
	int num;
	int sum=0;
	do
	{
		scanf("%d", &num);
		sum = sum+num;
	} while(num);
	printf("%d", sum);
	return 0;
}
