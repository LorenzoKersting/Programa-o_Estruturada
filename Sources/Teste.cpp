#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void maiusculo(char *inicio);

float difContemplados(float *salMin, float *gastoPrev, int *ano);
float quantContemplados(float *salMin, float *gastoPrev, int *ano);
float aumentoPrev(float *gastoPrev);
float aumentoMin(float *salMin);
float proporcionalidade(float *gastoPrev, float *salMin);


int main(){
	char nome[33], sobrenome[33], nomeCompleto[66];
	int i =0;
	
	printf("Quem tu eh: \n");
	scanf("%s", nome);
	scanf("%s", sobrenome);
	
	strcat(nome, " ");
	strcat(nome, sobrenome);
		
	maiusculo(&nome[0]);
	
	int ano[4]={2018,2019,2020,2021};
	float salMin[4]={954.0,998.0,1045.0,1100.0};
	float gastoPrev[4]={716000000000.0,767800000000.0,815800000000.0,878000000000};
	
	
}


void maiusculo(char *inicio){
	int i=0;
	for(i=0; i<33; i++){
		if(*(inicio+i) == '\0'){
			i = 33;
		}else{
			printf("%c", *(inicio+i)-32); //-32 POIS TABELA ASCII TEM DIFERENCA DE 32 PARA MAIUSCULO DE MINUSCULO
		}	
	}
	
	
}
