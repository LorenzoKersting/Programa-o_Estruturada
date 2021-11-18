#include <stdio.h>
#include <stdlib.h>

  

float CustoAtualPrevidencia(){

	float custoAtualPrevi = 0;
	scanf("%f", &custoAtualPrevi);
	
	printf("Valor atual do custo com previdencia eh de: %.2f \n", custoAtualPrevi);
	
	return custoAtualPrevi;
	
}

float QuantosContemplados(float salarioMinimo){
	
		float custoAtualPrevi = CustoAtualPrevidencia();
		
		float Contemplados = custoAtualPrevi / salarioMinimo; 
		
		printf("Estes sao os habitantes contemplados com a previdencia: %.2f", Contemplados);
	
}

int PercAumento(){
	
	int Aumento = 0;
	
	printf("Qual o valor de aumento do salario minimo voce deseja?    ");
	scanf("%d", &Aumento);
	
	return Aumento;
}


float simulaAumentoSalMini(float salarioMinimo){
	
	int Aumento = PercAumento();
	
	float AumentoPer = Aumento / 100;
	
	float NovoSalario = salarioMinimo + (salarioMinimo * Aumento);
	
	printf("Novo salario minimo seria de:   %.2f", NovoSalario);
	
}


float ImpactoAumento(){
	
}


int main(){
	

	float salarioMinimo = 0;
	
	printf("Qual o salario minimo atual?  ");
	scanf(" %f", &salarioMinimo);
	printf("\n");
	printf("----------------------------------------- \n");
	
	QuantosContemplados(salarioMinimo);
	
	
}
