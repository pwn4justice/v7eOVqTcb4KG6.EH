#include <stdio.h>
#include <string.h>

int max(char arr[]){
	int i = 0, max = 0;
	char m = '0';
	while(i < 4){
		if (arr[i] >= '0' && arr[i] <= '9' && m <= arr[i]){
			max = i;
			m = arr[i];
		}
		i++;
	}
	return max;
}


int min(char arr[]){
	int i = 0, min = 0;
	char m = '9';
	while(i < 4){
		if (arr[i] >= '0' && arr[i] <= '9' && m >= arr[i]){
			min = i;
			m = arr[i];
		}
		i++;
	}
	return min;
}

int stoi(char s[]){
	int i = 0;
	int sum = 0;
	while(i < 4){
		sum = sum * 10 + s[i];
		i++;
	}
	return sum;
}

void itos(int n, char *s){
	int i = 3, j = 10;
	while( i >= 0 ){
		s[i] = n % j + '0';
		n /= j;
		i--;
	}
	s[i] = '\0';
}

void print(char num[]){

	char result[5];
	char numb[5];
	char numc[5];
	char num1[5];
	char num2[5];


	/* cant write below code like this: num[0] == num[1] == num[2] ... */
	if( num[0] == num[1] && num[0] == num[2] && num[0] == num[3] ){
		printf("%s - %s = 0000\n", num, num);
		return;
	}

	strcpy(numb, num);
	strcpy(numc, num);

	printf("%c", num[max(numb)]); num1[0] = num[max(numb)]; numb[max(numb)] = 'x';
	//printf("***** %s ****\n", numb);
	printf("%c", num[max(numb)]); num1[1] = num[max(numb)]; numb[max(numb)] = 'x';
	printf("%c", num[max(numb)]); num1[2] = num[max(numb)]; numb[max(numb)] = 'x';
	printf("%c", num[max(numb)]); num1[3] = num[max(numb)]; numb[max(numb)] = 'x';

	printf(" - ");

	printf("%c", num[min(numc)]); num2[0] = num[min(numc)]; numc[min(numc)] = 'x';
	printf("%c", num[min(numc)]); num2[1] = num[min(numc)]; numc[min(numc)] = 'x';
	printf("%c", num[min(numc)]); num2[2] = num[min(numc)]; numc[min(numc)] = 'x';
	printf("%c", num[min(numc)]); num2[3] = num[min(numc)]; numc[min(numc)] = 'x';

	printf(" = %04d\n", stoi(num1) - stoi(num2)); 

	if (stoi(num1) - stoi(num2) == 6174) return;
	else {
		int k = stoi(num1) - stoi(num2);
		//printf("%d ---\n", k);
		itos(k, numb);
		//printf("%s ---\n", numb);
		print(numb);
	}
}


int main(){
	int d;
	char num[5] = {'0'};
	scanf("%d", &d);
	itos(d, num);
	print(num);
	return 0;
}
