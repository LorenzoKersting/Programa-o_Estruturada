#include<stdio.h>
#include<stdlib.h>

float media(int n, float *vnotas);

int anos();
void valoresTrabalhados();
int main (void)
{
	
	valoresTrabalhados();
	
	
}

void valoresTrabalhados(){
	anos();
	valorMin();
	gastoPrev();
}

int anos(){
	
	int ano[4], quantAno=4;
	for (int i=0; i < quantAno; i++)
	{
		printf("Digite os anos...\n");
		printf("%d :", i+1);
		scanf("%d", &ano[i]);
		printf("\n");
	}
}

float valorMin(){
	int j =0, quantSal = 4;
	float SalMin[4];
	
	printf("Digite os salarios para cada ano  \n");
	
	for (j = 0; j< quantSal; j++)
	{
		printf("salario: %d", j+1);
		scanf("%f", &SalMin[j]);	
		printf("\n");
	}
	
}

float gastoPrev(){
	int l =0, quantPrev = 4;
	float GastoPrev[4];
	
	printf("Gastos totais da previdencia \n");
	for (l = 0; l<quantPrev; l++)
	{
		printf("Gastos Previdencia: %d", l+1);
		scanf("%f", &GastoPrev[l]);	
		printf("\n");	
	}
	
}


	
