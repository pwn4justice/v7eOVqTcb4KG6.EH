#include <stdio.h>

void itoa(int n, char *s){ /* itoa() is functional!! */
	int i,j = 0, mid = 0,sign;
	char tmp;

	if((sign=n) < 0)
		n = -n;
	i = 0;
	do{
		s[i++] = n % 10 + '0';
	}while((n/=10)>0);

	if(sign < 0)
		s[i++] = '-';
	/* reverse output */
	s[i] = '\0';
	/* reverse s[] */
	mid = i / 2;
	i = i-1;
	while( j<=mid && i>=mid ){
		tmp = s[i];s[i] = s[j];s[j] = tmp;	
		j++;i--;
	}
}


int main(){
	int n = 0;
	char c,string[100];

	while( (c=getchar()) != EOF && c != '\n' )
		n += (c-'0');

	/* transfer n to str */
	itoa(n, string);
	n = 0;

	/* print */
	while(string[n] != '\0'){
		if (n) printf(" ");
		switch(string[n++]){
            case '0':printf("ling");break;
			case '1':printf("yi");break;
			case '2':printf("er");break;
			case '3':printf("san");break;
			case '4':printf("si");break;
			case '5':printf("wu");break;
			case '6':printf("liu");break;
			case '7':printf("qi");break;
			case '8':printf("ba");break;
			case '9':printf("jiu");break;
		}
	}	
	printf("\n");
	return 0;
}
