#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
	char s[100];
	int top;
}Stack;

char pop(Stack *s){
	return s->s[--s->top];
}

void push(Stack *s, char c){
	s->s[s->top++] = c;
}

int isEmpty(Stack *s){
	return s->top == 0;
}

int main(){
	Stack *word = (Stack *)malloc(sizeof(Stack));
	Stack *sentence = (Stack *)malloc(sizeof(Stack));

	char c;
	/* push to 'sentence' stack */
	while( (c=getchar()) != '\n' )
		push(sentence, c);

	/* read data from 'sentence' to 'word' and print 'word' */
	//while( (c=pop(sentence)) != ' ' ){
	
	while( !isEmpty(sentence) ){
		c = pop(sentence);
		if (c != ' ') push(word, c); 
		if (c == ' '){
		       while( !isEmpty(word) )
				printf("%c", pop(word));	       
		       printf(" ");
		}
	}
	/* print the final part( aka. The First Part of 'sentence' */
	while( !isEmpty(word) )
		printf("%c", pop(word));	       
	printf("\n");
	return 0;
}
