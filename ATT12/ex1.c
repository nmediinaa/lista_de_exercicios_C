#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"Portuguese");
	int valor;
	
	printf("------Inicio do Programa---------\n\n");
	printf("Entre com um valor num�rico inteiro: \n");
	
	scanf("%d",&valor);
	printf("\nO valor entrado foi: %d\n\n",valor);
	
	if(valor > 10)
		printf("O valor entrado � maior que 10!\n");
	else
		printf("O valor entrado � menor que 10!\n");
	
	printf("-------fim do programa---------");
	return 0;
}
