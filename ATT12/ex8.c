#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("---------Incio do Programa--------\n\n");
	
	printf("\nInsira a idade de uma pessoa: \n");
	scanf("%d",&idade);
	
	if((idade < 18)||(idade > 67))
		printf("\nPessoa NÃO recomendada a doar sangue!\n\n");
	else
		printf("\nEssa pessoa pode doar sangue!\n\n");
		
	printf("\n--------------Fim do Programa-----------------\n\n");
	return 0;
}
