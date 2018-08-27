#include <stdio.h>

int main()
{
	int maxima, minima, atual;
	float media;
	printf("Digite os valores referentes a: \n Maxima de estoque \n Minima de estoque \n Estoque atual \n");
	scanf("%d %d %d",&maxima,&minima, &atual);
	media = (maxima+minima)/2;
	if(atual< media)
	{	
		printf("efetuar compra \n");
	}else{
		printf("nao efetuar compra \n");
	}

}
