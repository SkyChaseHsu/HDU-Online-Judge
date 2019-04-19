#include <stdio.h>

int main()
{
	int a, sum;
	while(scanf("%d", &a) != EOF){
		sum = 0;
		for(int i = 1; i <= a; i++)
			sum += i;
		printf("%d\n", sum);
		printf("\n");
	}

	return 0;
}