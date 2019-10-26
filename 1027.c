#include <stdio.h>

int find_top_line(int num, int *half_num){
	int line_num = 3;
	int t = num / 2;
	int flag = 0;
	if (num % 2 == 1){
		if (num == 7){
			*half_num = 3;
			return line_num;
		}

		if (num < 7) {
			line_num = 0;
			*half_num = 0;
			return line_num;
		}

		while( t - line_num > 0 ){
			t -= line_num;	
			line_num += 2;
			if (t - line_num <= 0 && t % line_num == 0){
			       flag = 1;
			       break;
			}
		}

		if (flag) {
		 	*half_num = num / 2;
			return line_num;
		}

		return find_top_line(--num, half_num);

	}

	return find_top_line(--num, half_num);
}

void print_star(int stars){
	int max = stars;
	int space = 0;
	int t_space, t_stars;

	if (stars == 0) return;

	/* 1. descent print */
	//printf("****** stars: %d **************\n", stars);

	while(stars >= 1){
		t_stars = stars;
		t_space = space;

		while( t_space-- ) printf(" ");
		while(t_stars > 0){
			printf("*");
			t_stars--;
		}
		printf("\n");
		stars-=2;
		space++;
	}

	/* 2. ascend print */
	stars = 3;
	space-=2;
	while( stars <= max ){
		t_stars = stars;
		t_space = space;

		while( t_space-- ) printf(" ");
		while( t_stars > 0 ){
			printf("*");
			t_stars--;
		}

		printf("\n");
		stars+=2;
		space--;
	}
}



int main(){
	int ascend = 0;	/* if ascend */
	int star_cnt = 0;
	int user_input = 0;
	char user_symbol = 0;
	int left_cnt = 0;
	int top_line_number = 0;
	int half_number = 0;

	scanf("%d", &user_input);
	
	top_line_number = find_top_line(user_input, &half_number);
	printf("[debug] half number: %d\n", half_number);
	printf("[debug] top line   : %d\n", top_line_number);
	left_cnt = user_input - half_number * 2 - 1;
	star_cnt = half_number * 2;

	print_star(top_line_number);
	printf("[debug] left stars: %d\n", left_cnt);

	return 0;
}
