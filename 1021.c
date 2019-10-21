#include <stdio.h>

int main(){
	int c, DM[10] = {0};
	while( (c=getchar()) != '\n' )
		DM[c-'0']++;
	
	c = 0;
	while(c < 10){
		if (DM[c] != 0)
			printf("%d:%d\n", c, DM[c]);
		c++;
	}
	
	return 0;
}
