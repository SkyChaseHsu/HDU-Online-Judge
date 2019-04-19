#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N, cost, stay, des;

	while(scanf("%d", &N) && N){
		stay = cost = 0;
		for(int i = 1; i <= N; i++){
			scanf("%d", &des);
			cost += 5 + (des > stay? (des - stay) * 6: (stay - des) * 4);
			stay = des;
		}
		printf("%d\n", cost);
	}

	return 0;
}

/*
每次都是从0层开始动，注意每一站都要停5分钟

包括第9层
*/