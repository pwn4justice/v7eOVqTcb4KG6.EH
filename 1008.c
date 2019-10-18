#include <stdio.h>

void print(int *A, int len){
	int i = 0;
	while(i < len){
		if (i) printf(" ");
		printf("%d", A[i++]);
	}
	printf("\n");
}

int main(){
	int arr[200] = {0};
	int n, m, curr, tmp, saved, i = 1;
	char c;
	// /* INPUT */
	scanf("%d %d", &n, &m);
	scanf("%d", &arr[0]);
	while( (c=getchar()) != EOF && c != '\n' && i < n)
		scanf("%d", &arr[i++]);

	/* SOLVE */
	if ( m > n ) m = m % n;	
	if ( m == n ){
	       	print(arr, i);
			return 0;
	}
	
	/* insertion */
	curr = i - m;
	saved = 0;	/* start from index 0 */

	while( curr < i ){
		/* reuse n */
		n = curr - 1 ;
		/* save current arr[curr] */
		tmp = arr[curr];
		/* move */
	//	while( n>= 0){
		while( n>= saved){
			arr[n+1] = arr[n];
			n--;
		}
		/* replace */
		arr[saved] = tmp;
		/* update */
		saved++;
		curr++;
	}

	print(arr, i);	/* i == len */
	return 0;
}
