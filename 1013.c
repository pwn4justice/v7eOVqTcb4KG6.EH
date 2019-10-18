#include <stdio.h>
#include <math.h>

int isPrime(int P){
	int g, j, k, p, s;
	//p = (int)sqrt((double)P);
	p = P;
	g = P % 10;
	if ( P == 2 || P == 3 || P == 5 || P == 7 ) return 1;
	if (g == 1 || g == 3 || g == 7 || g == 9){
		while(P / 10 != 0){
			P /= 10;
			k = P % 10;
			g += k;
		}
		if (g % 3 != 0) {
			s = sqrt((double)p);
			for(j = 2; j<=s; j++)
				if ( p % j == 0) return 0;	
			return 1;
		}
	}
	return 0;
}

int main(){
	int M, N, P = 2, count = 0, line = 0;
	scanf("%d %d", &M, &N);

	if(M == 0) {
		printf("0");
		return 0;
	}
	while(1){
		if ( isPrime(P) ){
		       	count++;	
			if ( count > N ) break;
			if ( count >= M ){
				if (line == 0 && (count != M))
					printf("\n");
				if (line) printf(" ");
				printf("%d", P);
				line++;
				if (line == 10){
					line = 0;
				}
			}
		}
		P++;
	}

	return 0;
}