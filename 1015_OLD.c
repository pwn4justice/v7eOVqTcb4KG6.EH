#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
	char schoolID[10];
	int dscore;	// De Score	, [0,100]
	int cscore;	// Cai Score	, [0,100]
}Stu;


void let_us_sort(Stu *stu){
//actually, when writing down here, I encounter a better idea, see new 1015.c
}

void print(Stu *stu){

}


int main(){
	/** 
	 *
	 * student numbers: N <= 10^5 
	 * lowest score   : L >= 60 ; Lowest
	 * best score line: H < 100 ; High
	 *
	 **/
	Stu *students[100000];
	int i = 0, s_i = 0;
	int N, L, H;
	
	/* temparary data */
	char id[10];
	/* d => de_score, c => cai_score */
	int d = 0, c = 0;
	/* A pointer point to A student */
	Stu *stu;

	/* start to solve */
	scanf("%d %d %d", &N, &L, &H);

	while(i < N){
		scanf("%s %d %d", id, &d, &c);
		/** 
		 * cut the bad data
		 * if de_score < Lowest or cai_score < Lowest
		 **/
		if (d < L || c < L){
			i++;
			continue;
		}

		stu = (Stu *)malloc(sizeof(Stu));
		strcpy(stu->schoolID, id);
		stu->dscore = d;
		stu->cscore = c;

		student[s_i++] = stu;
		i++;
	}

	/** 
	 * After collecting data, Let's start to sort!!
	 * Take it easy, it just exchange the value of pointers...
	 **/
	int valid_student_numbers = s_i;	
	/* save that value, 'cause we wil print it later! */

	if (valid_student_numbers == 0) return 0;

	let_us_sort(&students[0]);

	/* After sorting, Let's print all students' info */
	print(&student[0]);

	return 0;
}

