#include <stdio.h>


int main(){
	int i, j, flag, input[1000];
	char c;

	i = flag = 0;
	scanf("%d", &input[i++]);

	while((c=getchar()) != '\n')
		scanf("%d", &input[i++]);

	for(j = 0; j < i; j += 2){
		if (input[j + 1] == 0){
			input[j] = 0;
			continue;
		}

		input[j] = input[j] * input[j+1];
		input[j+1] -= 1;
	}

	for(j = 0; j < i; j++){

		if (j % 2 == 0 && input[j] == 0){
			j++;
			continue;
		}

		if (flag) printf(" ");
		printf("%d", input[j]);
		flag++;
	}
	if (flag == 0) printf("0 0");
	printf("\n");
	return 0;
}
