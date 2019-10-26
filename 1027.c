#include <stdio.h>

int find_top_line(int num, int *half_num){
	int line_num = 3;
	int t = num / 2;
	int flag = 0;
	if (num % 2 == 1){
		if (num == 1) {
			line_num = 0;
			*half_num = 0;
			return line_num;
		}
		if (num == 3) flag = 1;
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


int main(){
	int ascend = 0;	/* if ascend */
	int star_cnt = 0;
	int user_input = 0;
	char user_symbol = 0;
	int left_cnt = 0;
	int top_line_number = 0;
	int half_number = 0;

	//scanf("%d %c", &star_cnt, &user_symbol);
	scanf("%d", &star_cnt);
	printf("top line: %d\n", find_top_line(star_cnt, &half_number));
	printf("half number: %d\n", half_number);


	return 0;
}
