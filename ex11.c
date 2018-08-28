#include <stdio.h>

int maior(int a, int b)
{
	if(a> b)
	{
		return a;
	}else{

		return b;
	}	

}
int menor(int a, int b)
{
	if(a<b)
	{
		return a;
	 }else{
		return b;
	}

}


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
	

	maior(homem[0], homem[1]);
	results[0] = maior(homem[0], homem[1]) + menor(mulher[0], mulher[1]);
	results[1] = menor(homem[0], homem[1]) * maior(mulher[0], mulher[1]);

	printf("%.2f \n", results[0]);
	printf("%.2f \n", results[1]);

}
