#include <stdio.h>
#include <stdlib.h>

  

float CustoAtualPrevidencia(){

	float custoAtualPrevi = 0;
	scanf("%f", &custoAtualPrevi);
	
	printf("\n Valor atual do custo com previdencia eh de: %.2f \n", custoAtualPrevi);
	
	return custoAtualPrevi;
	
}

float QuantosContemplados(float salarioMinimo){
	
		float custoAtualPrevi = CustoAtualPrevidencia();
		
		float Contemplados = custoAtualPrevi / salarioMinimo; 
		
		printf("Estes sao os habitantes contemplados com a previdencia: %.2f", Contemplados);
	
}

int main(){
	

	float salarioMinimo = 0;
	
	printf("Qual o salario minimo atual?  ");
	scanf(" %f", &salarioMinimo);
	printf("\n ----------------------------------------- \n");
	
	QuantosContemplados(salarioMinimo);
	
	
}
