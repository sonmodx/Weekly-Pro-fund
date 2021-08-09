#include <stdio.h>
int main ()
{
	int num;
	int sum=0;
	while(num!=0){
			scanf("%d", &num);
		sum = sum+num;
	}
	printf("%d", sum);
	return 0;
}
