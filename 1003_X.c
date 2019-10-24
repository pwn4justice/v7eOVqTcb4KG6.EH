#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPAT(char s[]){
	int i = 0, len = strlen(s);
	while(i < len){
		if (s[i] != 'A' && s[i] != 'P' && s[i] != 'T')
			return 0;
		i++;
	}
	return 1;
}

int findFirst(char c, char s[]){
	int i = 0;


int isYES(char s[]){
	int before_P, after_T;	



}

int main(){
	/* input */
	int i = 0, N;
	char *strings[10], *str;
	scanf("%d", &N);

	while(i < N){
		str = (char *)malloc(sizeof(char) * 101);
		scanf("%s", str);
//		printf("[debug] str: %s\n", str);
		strings[i] = str;
//		printf("[debug] isPAT: %d\n", isPAT(str));
		i++;
	}
	


	/* free memory */
	for(int j = 0; j < N ;j++)
		free(strings[j]);

	return 1;
}
