#include <stdio.h>

int find_half_numbers(int num){
	if (num % 2 == 1){
		if( (num/2) % 2 == 0 ){
			return num/2;
		}else{
			return find_half_numbers(--num); 
		}
	}
	return find_half_numbers(--num);
}

int find_top_line(int half_num){
	int line_num = 3;
	while( half_num != 0){
		half_num -= line_number;
		lin_number += 2;
	}

}

int main(){
	int ascend = 0;	/* if ascend */
	int star_cnt = 0;
	int user_input = 0;
	char user_symbol = 0;
	int left_cnt = 0;
	int top_line_number = 0;
