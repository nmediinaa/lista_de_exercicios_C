#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	double valor, vt, vd;
	int quantidade;
	
	printf("\nValor do Produto: ");
	scanf("%lf",&valor);
	
	printf("\nQuantidade dos Produtos: ");
	scanf("%d",&quantidade);
	
	
	if(quantidade >= 10){
		vd = valor*10/100;
		vt = (quantidade * valor) - vd;
		
		printf("\n\nValore Finais:\nPreço: %0.2lf\nQuantidade: %d\nValor Final: %0.2lf",valor, quantidade, vt);	
	}
	else{
		vt = quantidade * valor;
	
		printf("\n\nValore Finais:\nPreço: %0.2lf\nQuantidade: %d\nValor Final: %0.2lf",valor, quantidade, vt);
	}
	
	
	return 0;
}
