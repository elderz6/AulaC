#include <stdio.h>

int main()
{
	int nConta;
	float saldo, credito, debito;
	printf("Digite: \n o numero da conta \n o seu saldo \n credito \n debito \n");
	scanf("%d %f %f %f", &nConta, &saldo, &credito, &debito);
	printf("Conta: %d \n saldo: %.2f \n credito: %.2f \n debito: %.2f \n", nConta, saldo, credito, debito);	
	saldo = saldo - debito + credito;
	printf("Saldo Atual: %.2f \n", saldo);
}
