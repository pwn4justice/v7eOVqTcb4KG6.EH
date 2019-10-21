#include <stdio.h>
#include <math.h>


int isPrime(int p){
	int m = 0, k, b;
	if (p == 2 || p == 3 || p == 5 || p == 7) return 1;
	b = p;
	k = p % 10;
	if(k == 1 || k == 3 || k == 7 || k == 9){
		while (p / 10){
			p /= 10;	
			m = p % 10;
			k += m;
		}

		if (k % 3 == 0) return 0;
		else{
			for (int i = 2; i <= sqrt(b); i++)
				if (b % i == 0) return 0;

		}
		return 1;
	}
	return 0;
}

int main(){
	int N, p, cnt;
	scanf("%d", &N);
	if ( N < 2 ) {
		printf("0\n");
		return 0;
	}
	p = 3; cnt = 0;
	/* test isPrime()
	while(p < 100){
		if (isPrime(p)) printf("%d ", p);
		p++;
	}
	return 0;
	*/
	while( p<=N ){
		if (isPrime(p)){
			if (p+2 <= N && isPrime(p+2)){
				cnt++;
			}
		}
		p += 2;
	}

	printf("%d\n", cnt);

	return 0;
}
