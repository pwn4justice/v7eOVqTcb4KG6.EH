#include <stdio.h>

void print(int num, int d){
	int box = num;
	int left = box % d;

	if (box / d == 0) {
		printf("%d", left);
		return;
	}
	box /= d;
	/* recursion */
	print(box, d);
	printf("%d", left);
}

int main(){
	int A, B, D;
	scanf("%d %d %d", &A, &B, &D);
	print(A+B, D);
	return 0;
}

