#include <stdio.h>

int main()
{
	int a, b, n, tp1, tp2, out;
	
	while(scanf("%d%d%d", &a, &b, &n) && a+b+n){
		if(n == 1 || n == 2){
			printf("1\n");
		}else{
			n %= 49;
			tp1 = tp2 = 1;
			for(int i = 1; i+2 <= n; i++){
				out = (a * tp1 + b * tp2) % 7;
				tp2 = tp1;
				tp1 = out;
			}
			printf("%d\n", out);
		}
	}
	return 0;
}