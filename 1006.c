#include <stdio.h>

void print(char c, int times){
	int i = 0;
	while(i++ < times)
		printf("%c", c);
}

void printn(int n){
	int i = 1;
	while(i<=n)
		printf("%d",i++);
}


int main(){
	char c, a[5];
	int i = 0;
	while( (c=getchar()) != '\n' )
		a[i++] = c;	
	a[i] = '\0';
	
	switch(i){
		case 3:
			print('B',a[0] - '0');
			print('S',a[1] - '0');
			printn(a[2] - '0');
			break;
		case 2:
			print('S',a[0] - '0');
			printn(a[1] - '0');
			break;
		case 1:
			printn(a[0] - '0');
			break;
		default:
			break;
	}
	printf("\n");
	
	return 0;
}
