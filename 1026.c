#include <stdio.h>

/* clock */
void clock_(int start, int end, char *time){
	const int CLK_TCK = 100; /* or #define */
	int second = (end - start) / CLK_TCK;
	if( (end - start) % CLK_TCK >= 50 ) second += 1; /* Fix test point 1 */
	int h, m, s;
	h = second / 3600;
	m = (second - ( h * 3600 )) / 60;
	s = (second - ( h * 3600 )) % 60;

	if (h < 10) {
		time[0] = '0';
		time[1] = h + '0';
	}else{
		time[0] = h / 10 + '0';
		time[1] = h % 10 + '0';
	}
	time[2] = ':';
	if (m < 10) {
		time[3] = '0';
		time[4] = m + '0';
	}else{
		time[3] = m / 10 + '0';
		time[4] = m % 10 + '0';
	}
	time[5] = ':';
	if (s < 10) {
		time[6] = '0';
		time[7] = s + '0';
	}else{
		time[6] = s / 10 + '0';
		time[7] = s % 10 + '0';
	}
	time[8] = '\0';
}


int main(){
	char time[9];
	int start, end;

	scanf("%d %d", &start, &end);
	clock_(start, end, time);

	printf("%s\n", time);
	return 0;
}
