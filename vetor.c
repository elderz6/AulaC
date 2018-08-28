#include <stdio.h>

int main(){
int i, j, aux;
int vetor[6];

for(i = 0; i<=5; i++){
	scanf("%d", &vetor[i]);
}
printf("sorting ------------------------- \n");

for(i=0; i<=4; i++){
	for(j = i+1; j<=5; j++){
		if(vetor[i] > vetor[j]){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
		}
	}
}

for(i=0; i<=5;i++){
	printf("[ %d ] \n", vetor[i]);
}
}
