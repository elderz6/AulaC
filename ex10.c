#include <stdio.h>

int main()
{
	int litros;
	float preco;
	char tipo;
	printf("Alcool: 3,90 \n Gasolina: 4,30 \n");
	printf("Informe os valores: \n Tipo de combustivel A- alcool, G- gasolina; \n Litros vendidos \n");
	scanf("%c %d", &tipo, &litros);
	if(tipo == 'A')
	{
		preco = litros * 3.90;
		printf("Preco a ser pago: %.2f \n", preco);
	}else if(tipo == 'G')
	{
		preco = litros * 4.30;
		printf("preco a ser pago: %.2f \n", preco);
	}else
	{
		printf("Tipo de combustivel invalido \n");
	}
}
