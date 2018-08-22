#include <stdio.h>

int main()
{
	int horas, horasExtra;
	float salarioHora, salarioExtra, salarioTotal;

	printf("Informe quantas horas trabalhou \n");
	scanf("%d", &horas);
	
	printf("Informe quanto é o salario/hora \n");
	scanf("%f", &salarioHora);

	if(horas > 160)
	{
		horasExtra = horas -160;
		salarioExtra = salarioHora + (salarioHora/2);
		salarioExtra = salarioExtra * horasExtra;
		salarioTotal = salarioExtra + (salarioHora * (horas - horasExtra));
		printf("%.2f \n", salarioTotal);
	}
	else
	{
		printf("%.2f  \n", salarioHora * horas);
	}
}
