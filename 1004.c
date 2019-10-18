#include <stdio.h>
#include <string.h>


typedef struct student{
	char name[11];
	char code[11];
	int score;
}Student;


void find_max_and_min(Student *students, int len){
	int max = students[0].score;
	int min  = max;

	int i = 0, max_index = 0, min_index = 0;


	while(i < len){
		if (students[i].score < min){
			min = students[i].score;
			min_index = i;
		}
		if (students[i].score > max){
			max = students[i].score;
			max_index = i;
		}
		i++;
	}
	/* print the max and min student */
	printf("%s %s\n", students[max_index].name, students[max_index].code);
	printf("%s %s\n", students[min_index].name, students[min_index].code);
}


int main(){
	int n, score;
	int i = 0;
	Student students[1000];
	char string[11];
	char c ;

	scanf("%d", &n);
	while(i < n){
		/* NOTICE: the usage of scanf()!!! */
		scanf("%s %s %d", students[i].name, students[i].code, &students[i].score);
		i++;
	}
	
	find_max_and_min(students, n);

	return 0;
}
