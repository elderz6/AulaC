#include <stdio.h>

int main()
{
	float fixo, vendas, total;
	printf("Informe o salario fixo \n");
	scanf("%f", &fixo);
	printf("Informe o total de vendas \n");
	scanf("%f", &vendas);

	total = fixo + (vendas * 0.03);
	if(vendas >= 20000)
	{
		total = total + 600;
		printf("Meta atingida \n Salario Total: %.2f \n", total);
	}
	else
	{
		printf("Salario Total:  %.2f \n", total);
	}

}
