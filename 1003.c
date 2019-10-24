#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i = 0, j = 0, N;
	int cntp = 0 , cnta = 0, cntt = 0;
	int flag = 1;
	char *ss[10], *s;
	char *p, *t;

	scanf("%d", &N);
	while(i < N){
		s = (char *)malloc(sizeof(char) * 101);
		scanf("%s", s);
		//strcpy(ss[i], s);	//不能这样用！！！
		ss[i] = s;
		i++;
	}
	i = 0;
	while(i < N){
		for(j = 0; ss[i][j] != '\0'; j++){
			if (ss[i][j] == 'A') cnta++;
			else if(ss[i][j] == 'P') cntp++;
			else if(ss[i][j] == 'T') cntt++;
			else { flag = 2; break;}
		}

		if (flag && cntt == 1 && cntp == 1 && cnta != 0){
			p = strchr(ss[i],'P');
			t = strchr(ss[i], 'T');
			if ( (p-ss[i]) * (t - p - 1) == strlen(t)-1 )
				flag = 0;
		}

		if (flag == 0) printf("YES\n");
		else printf("NO\n");
		i++;

		/* recover */
		cntt = cnta = cntp = 0;
		flag = 1;
	}

	/* free */
	i = 0;
	while(i < N){
		free(ss[i]);
		i++;
	}

	return 0;
}
