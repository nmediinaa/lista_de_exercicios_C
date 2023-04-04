#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor;
	
	printf("---------Incio do Programa--------\n\n");
	
	printf("Digite um valor inteiro: \n");
	scanf("%d",&valor);
	
	if(valor % 2 == 0)
		printf("\nO valor %d entrado é Par!\n",valor);
	else
		printf("\nO valor %d entrado é Ímpar!\n",valor);
		
	printf("\n--------------Fim do Programa-----------------\n\n");
	return 0;
}
