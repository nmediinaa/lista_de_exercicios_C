#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	double n1, n2, n3, media;
	
	printf("---------Incio do Programa--------\n\n");
	
	printf("\nDigite a nota da n1 do aluno: \n");
	scanf("%lf",&n1);
	
	printf("\nDigite a nota da n2 do aluno: \n");
	scanf("%lf",&n2);
	
	printf("\nDigite a nota da n3 do aluno: \n");
	scanf("%lf",&n3);
	
	printf("\nNotas entradas: \n n1 = %0.2lf\n n2 = %0.2lf\n n3 = %0.2lf",n1,n2,n3);
	
	media = (n1 + n2 + n3)/3;
	
	if(media >= 6.0)
		printf("\n\nAluno Aprovado!\n media = %0.2lf\n",media);
	else
		printf("\n\nAluno Reprovado!\n media = %0.2f\n",media);
		
	printf("\n--------------Fim do Programa-----------------\n\n");
	return 0;
}
