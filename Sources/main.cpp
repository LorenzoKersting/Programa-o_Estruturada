#include <stdio.h>
#include <stdlib.h>

  

float CustoAtualPrevidencia(){
	
	printf("Qual o custo atual aplicado na previdencia social? ");
	float custoAtualPrevi = 0;
	scanf("%f", &custoAtualPrevi);
	
	printf("----------------------------------------- \n");
	printf("Valor atual do custo com previdencia eh de: %.2f \n", custoAtualPrevi);
	
	
	return custoAtualPrevi;
	
}

float QuantosContemplados(float salarioMinimo){
	
		float custoAtualPrevi = CustoAtualPrevidencia();
		
		float Contemplados = custoAtualPrevi / salarioMinimo; 
		
		printf("Estes sao os habitantes contemplados com a previdencia: %.2f", Contemplados);
		printf("----------------------------------------- \n");
}

// FUNÇÃO SEM PONTEIRO SOMENTE RECEBE O VALOR REFERENTE AO AUMENTO
int PercAumento(){
	
	int Aumento = 0;
	
	printf("Qual o valor de aumento do salario minimo voce deseja?    ");
	scanf("%d", &Aumento);

	
	return Aumento;
}

// FUNÇÃO QUE CALCULA O AUMENTO DO SALARIO MINIMO E DIRECIONA PARA OS CONTEMPLADOS
float simulaAumentoSalMini(float *salarioMinimo ){
	
	int Aumento = PercAumento();
	
	float AumentoPer = Aumento / 100;
	
	float *NovoSalario = *salarioMinimo + (*salarioMinimo * Aumento);
	
	printf("Novo salario minimo seria de:   %.2f", *NovoSalario);
	
	QuantosContemplados(*NovoSalario);
	
}


float ImpactoAumento(){
	
}


int main(){
	float *salarioMinimo = 0;
	int aux = 0;
	
	printf("----------------------------------------- \n");
	printf("Qual o salario minimo atual?  ");
	scanf(" %f", &salarioMinimo);
	printf("\n");
	
	printf("Quer aumentar o salário mínimo atual?  1 - SIM  2 - NAO  ");
	scanf("%d", &aux);
	printf("\n");
	
	if(aux == 1){
			
		simulaAumentoSalMini(*salarioMinimo);	
		
	}else {
		QuantosContemplados(*salarioMinimo);
	}
	
	printf("----------------------------------------- \n");
	

	
	
}
