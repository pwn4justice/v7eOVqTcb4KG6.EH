#include <stdio.h>

void sort(int *a, int n){
	int i = 0, j = 0, p = 0, tmp;
	/* 1. format */
	while(i < n){
		if (a[i] != 0) {
			a[j] = a[i];
			if (i != j) a[i] = 0;
			j++;
		}
		i++;
	}

	/* 2. bubble sort */
	for(i = 0; i < j; i++){
		for(p = j - 1; p > i; p--){
			if(a[p] > a[p - 1]){
				tmp = a[p];
                a[p] = a[p-1];
				a[p-1] = tmp;
			}	
		}
	}
}


void print(int *a, int n){
	int i = 0;
	
	/* first: sort and clean the arr_bak to format: 7 6 0 0 0 0 ... */
	sort(a, n);
	
	while(i < n){
		/* this function is specified for this problem #1005 */
		if (a[i] == 0) break;

		if(i) printf(" ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/* try to find 'digit' at 'arr[]' and then set it to 0 */
void find_and_kill(int digit, int *arr, int len){
	int i = 0;
	while(i < len){
		if (arr[i] == digit)
			arr[i] = 0;
		i++;
	}
}


int main(){
	int n, i = 0;
	int arr[100], arr_bak[100];

	/* 1. input */
	scanf("%d", &n);
    if (n==0) {
        printf("\n");
        return 0;
    }
	while(i < n){
		scanf("%d", &arr[i]);

		/* make a copy of arr[] */
		arr_bak[i] = arr[i];

		i++;
	}

	/* 2. solve */
	for(i = 0; i<n; i++){
		/* emmmm */
		int curr = arr[i];

		while(curr != 1){
			if( curr % 2 == 0 ){
				curr /= 2;
			}else{ 
				curr = 3 * curr + 1;
			}
			find_and_kill(curr, arr_bak, n);
		}

	}

	/* 3. print arr_bak[] */
	print(arr_bak, n);

	return 0;
}
