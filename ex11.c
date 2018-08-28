#include <stdio.h>

int main()
{
	int homem[2];
	int mulher[2];
	int novo, nova, velho, velha;	
	float results[2];

	printf("Digite a idade de dois homens \n");
	scanf("%d %d", &homem[0], &homem[1]);
	printf("Digite a idade de duas mulheres \n");
	scanf("%d %d", &mulher[0], &mulher[1]);
	
	if(homem[0]>homem[1]){
		velho = homem[0];
		novo = homem[1];
	}
	else{
		velho = homem[1];
		novo = homem[0];
	}
	if(mulher[0]>mulher[1])
	{
		velha = mulher[0];
		nova = mulher[1];
	}else{
		velha = mulher [1];
		nova = mulher[0];
	}
	results[0] = velho+nova;
	results[1] = novo * velha;
	
	printf("%.2f \n", results[0]);
	printf("%.2f \n", results[1]);

}
