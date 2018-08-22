#include <stdio.h>

int main()
{
	int nota1;
	int nota2;
	float media;
	printf("Insira as duas notas das fases \n");
	scanf("%d %d", &nota1, &nota2);
	media = (nota1+nota2)/2;	
	if(media >= 8)
	{
		printf("Experiencia boa \n Media: %.2f", media);
	}
	else
	{
		printf("Experiencia Regular \n Media: %.2f", media);
	}

	printf("\n");
}
