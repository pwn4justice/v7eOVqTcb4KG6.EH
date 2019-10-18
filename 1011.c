#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0, j = 0, T;
	long arr[500][3] = {0};

	/* Get Input */
	scanf("%d", &T);
	while( i < T ){
		while( j < 3 ){
			scanf("%ld", &arr[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

	for(i = 0; i < T; i++){
		if (arr[i][0] + arr[i][1] - arr[i][2] > 0)
			printf("Case #%d: true\n", i+1);
		else
			printf("Case #%d: false\n", i+1);
	}

	return 0;
}
	