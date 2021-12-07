#include <stdio.h>
#include <stdlib.h>

int Anos (int m, int Ano);
float SalMin (int n, float *SalMin);
float GastosFeracao (int o, float *GastoFed);
float GastosPrevidencia (int p, float *GastoPrev);
float PreviNosTotais (float *GastoFed, *GastoPrev); //Saber quanto representa dos gastos da federação
float SalMinNaPrevi () //Quantos atendemos se todos ganharem o mínimo possível
float CrescimentoSalparaCrescimentoGastoPrevi () //Entender quantos % o salário aumenta e quantos % o gasto com previdencia aumentou, é proporcional?

int main()
{

	float SalMin[4], GastoFed[4], GastoPrev[4];
	int Ano[4], i, j, k, l;
	
		
	printf("Digite os anos a serem analisados:  \n");
	for (i = 0; i<4; i++)
	{
		printf("ano: %d ", i+1);
		scanf("%d", &Ano[i]);
		printf("\n");
				
	}
	
	printf("Digite os salarios para cada ano  \n");
	for (j = 0; j<4; j++)
	{
		printf("salario: %d", j+1);
		scanf("%f", &SalMin[j]);	
		printf("\n");
	}
	
	printf("Gastos totais da federacao \n");
	for (k = 0; k<4; k++)
	{
		printf("Gastos Federacao: %d", k+1);
		scanf("%f", &GastoFed[k]);	
		printf("\n");	
	}
	
	printf("Gastos totais da previdencia \n");
	for (l = 0; l<4; l++)
	{
		printf("Gastos Previdencia: %d", l+1);
		scanf("%f", &GastoPrev[l]);	
		printf("\n");	
	}
	
		
	float Participacao = ((GastoPrev * 100)/ GastoFed)
	float Ano 1 - Participacao[1]
		  Ano 2 - Participacao[2]
		  Ano 3 - Participacao[3]
		  Ano 4 - Participacao[4]
}
