#include <stdio.h>
#include <stdlib.h>

  


void CustoAtualPrevidencia(){
	float custoAtualPrevi;
	char confirma;
	
	scanf("%f", &custoAtualPrevi);
	
	printf("\n Valor atual do custo com previdencia eh de: %.2f", custoAtualPrevi);
	
}

float QuantosContemplados(float salarioAtual, float custoAtualPrevi){
	
		float Contemplados = custoAtualPrevi / salarioAtual;
		
		printf("Estes s�o os habitantes contemplados com a previd�ncia: %.2f", Contemplados);
	
}

int main(){
	
	float salarioAtual;
	
	CustoAtualPrevidencia();
	
	QuantosContemplados(float salarioAtual, float custoAtualPrevi);

}
