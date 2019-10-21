#include <stdio.h>
#include <stdlib.h>

int main(){
	/* 0 < A, B < 10^10 */
	char A[20]; char PA[20];
	char B[20]; char PB[20];
	int da, db;
	int i = 0, j = 0;
	int a = 0, b = 0;

	scanf("%s %d %s %d", A, &da, B, &db);
	/* handle A[] */
	while(A[i] != '\0'){
		if ((A[i] - '0') == da)
			PA[a++] = A[i];
		i++;
	}
	if (a) PA[a] = '\0';
	else {PA[0] = '0'; PA[1] = '\0';}

	/* handle B[] */
	i = 0;
	while(B[i] != '\0'){
		if ((B[i] - '0') == db)
			PB[b++] = B[i];
		i++;
	}
	if (b) PB[b] = '\0';
	else { PB[0] = '0'; PB[1] = '\0';}

	printf("%ld", atol(PB) + atol(PA));
	return 0;
}
