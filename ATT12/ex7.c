#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int valor1, valor2;
	
	printf("---------Incio do Programa--------\n\n");

	printf("Insira um valor numérico: ");
	scanf("%d",&valor1);
	
	printf("Insira um valor numérico: ");
	scanf("%d",&valor2);
	
	if(valor1 == valor2)
		printf("\n\nValores entrados iguais!\n\n");
	else{
		if(valor1 > valor2)
			printf("\n\nValor %d é o maior!\n\n",valor1);
		else
			printf("\n\nValor %d é o maior!\n\n",valor2);
	}
		
	printf("\n--------------Fim do Programa-----------------\n\n");
	return 0;
}
