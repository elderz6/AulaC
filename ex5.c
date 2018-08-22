#include <stdio.h>

void check(int num)
{
	printf("%d É o menor valor \n", num);
}
void dif()
{
	printf("Os numeros devem ser Diferentes \n digite outro numero \n");
}

int main()
{
	int a[3];
	printf("Digite o primeiro numero \n");
	scanf("%d", &a[0]);
	
	printf("Digite o segundo numero \n");
	scanf("%d",&a[1]);

	while(a[0] == a[1])
	{
		dif();
		scanf("%d", &a[1]);
	}

	printf("Digite o terceiro numero \n");
	scanf("%d", &a[2]);
	
	while(a[0] == a[2] || a[1] == a[2])
	{
		dif();
		scanf("%d", &a[2]);
	}

	int maior = a[0];
	int menor = a[0];

	for(int i = 1; i<3; i++)
	{
		if(a[i] > maior)
		{
			maior = a[i];
		}
		if(a[i] < menor)
		{	
			menor = a[i];
		}
	}

	printf("Maior Numero %d \n", maior);
	printf("menor numero %d \n ", menor);
}	
	
