#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Global Values */
int LowestScore;
int HighScore;

typedef struct student{
	char schoolID[10];
	int dscore;	// De Score	, [0,100]
	int cscore;	// Cai Score	, [0,100]

	struct student *prev;
	struct student *next;
}Stu, *SList;

//actually, i am goona using the Link_LIST!!! 
void init(SList * head){
	*head = (Stu *)malloc(sizeof(Stu));
	(*head)->prev = *head;
	(*head)->next = *head;
}

int compare(Stu s1, Stu s2){
	/**
	 * 1. d>=HighScore && c>=HighScore
	 * 2. d>=HighScore && c<HighScore
	 * 3. d<HighScore && c<HighScore && d >= c
	 * 4. other
	 **/
	if (s1.dscore >= HighScore && s1.cscore >= HighScore){
		if (s2.dscore >= HighScore && s2.cscore >= HighScore){
			if ( s1.dscore+s1.cscore >= s2.dscore+s2.cscore ){
				return 1;	//means s1 >= s2
			}else return 0;		//means s1 < s2
		}else return 1;
	}else if(s1.dscore >= HighScore && s1.cscore < HighScore){
		if (s2.dscore >= HighScore && s2.cscore >= HighScore){
			return 0;
		}else if(s2.dscore >= HighScore && s2.cscore < HighScore){
			if(s1.dscore+s1.cscore >= s2.dscore+s2.cscore)
				return 1;
			else return 0;
		}else return 1;
	}else if(s1.dscore >= s1.cscore && s1.dscore < HighScore && \
			s1.cscore < HighScore){
		if(s2.dscore >= HighScore && s2.cscore >= HighScore)
			return 0;
		else if(s2.dscore >= HighScore && s2.cscore < HighScore)
			return 0;
		else if(s2.dscore > s2.cscore && s2.dscore < HighScore && \
				s2.cscore < HighScore){
			if(s1.dscore+s1.cscore >= s2.dscore+s2.cscore)
				return 1;
			else return 0;
		}else return 1;
	}else{
		if(s1.dscore+s1.cscore >= s2.dscore+s2.cscore) return 1;
		else return 0;
	}
}

void insert(Stu *stu, int pos){
	// pos == 1: front insert
	// pos == 0: insert to next
	
}	

int isEmptyList(SList list){
	if (list->prev == list->next) return 1;
	return 0;	
}


int main(){
	/** 
	 *
	 * student numbers: N <= 10^5 
	 * lowest score   : L >= 60 ; Lowest
	 * best score line: H < 100 ; High
	 *
	 **/
	int i = 0, s_i = 0;
	int N;
	
	/* temparary data */
	char id[10];
	/* d => de_score, c => cai_score */
	int d = 0, c = 0;
	/* A pointer point to A student */
	Stu *stu;

	/* start to solve */
	scanf("%d %d %d", &N, &LowestScore, &HighScore);

	while(i < N){
		scanf("%s %d %d", id, &d, &c);
		/** 
		 * cut the bad data
		 * if de_score < Lowest or cai_score < Lowest
		 **/
		if (d < LowestScore || c < LowestScore){
			i++;
			continue;
		}

		stu = (Stu *)malloc(sizeof(Stu));
		strcpy(stu->schoolID, id);
		stu->dscore = d;
		stu->cscore = c;

		if (isEmptyList(Head)) {
			/* insert to next */
			continue;
		}

		/* else: 1. compare one by one and find an appropery position to insert */



		i++;
	}

	/** 
	 * After collecting data, Let's start to sort!!
	 * Take it easy, it just exchange the value of pointers...
	 **/
	int valid_student_numbers = s_i;	
	/* save that value, 'cause we wil print it later! */

	if (valid_student_numbers == 0) return 0;


	/* After sorting, Let's print all students' info */

	return 0;
}

