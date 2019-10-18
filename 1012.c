#include <stdio.h>

int main(){
	int i = 0, flag = 1, N, A;
	int sum_odd=0, sum_x=0, count=0, max = 0;
	int a,b,c,d,e;
	float avg;
	
	a = b = c = d = e = 0;
	scanf("%d", &N);
	while(i++ < N){
		scanf("%d", &A);
		if (A % 5 == 0 && A % 2 == 0){ a = 1; sum_odd += A; }
		if (A % 5 == 1){
			b = 1;
		        sum_x += flag * A;
			flag = -flag;
		}
		if (A % 5 == 2 ){ c = 1; count++; }
		if (A % 5 == 3){ d++; avg += A; }
		if (A % 5 == 4){ e = 1; if (max < A) max = A;}
	}

	if (!a) printf("N "); else printf("%d ", sum_odd);
	if (!b) printf("N "); else printf("%d ", sum_x);
	if (!c) printf("N "); else printf("%d ", count);
	if (!d) printf("N "); else printf("%.1f ", avg/d);
	if (!e) printf("N"); else printf("%d", max);
	return 0;
}