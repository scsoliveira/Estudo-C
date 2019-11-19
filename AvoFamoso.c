#include <stdio.h>
#include <string.h>
#define MAX 10001


int main (){
	
int i, j, x, p, s, N, M;
int valores[MAX];

while (scanf ("%d %d", &N, &M) && (N || M)){
	for(i = 0; i < MAX; i++){ valores[i] = 0;}
	s = 0;
	p = 0;

	for (i = 0; i < N; i++){
		for (j = 0; j < M; j++){
			scanf("%d",&x);
			valores[x]++;
		}
	}
	for (i = 0; i <= 10000; i++){
		if (valores[i] > p){
			s = p;
			p = valores[i];
		}
	else{
		if(valores[i] > s)
			s = valores[i];
		}
	}
	
	for (i = 0; i <= 10000; i++){
		if (valores[i] == s)
			printf ("%d ", i);
	}
	printf("\n");
}
return 0;
}
