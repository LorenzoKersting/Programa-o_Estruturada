#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"


int main (){
	 
	char nome[33], sobrenome[33], nomeCompleto[66];
	
	float salAumentoPerc[3], quantContemplado[4],prevAumentoPerc[3];
	int i =0, tam=0;

	printf("Quem tu eh: \n");
	scanf("%s", nome);
	scanf("%s", sobrenome);

	strcat(nome, " ");
	strcat(nome, sobrenome);

	maiusculo(&nome[0]);

	int ano[4]={2018,2019,2020,2021};
	float salMin[4]={954.0,998.0,1045.0,1100.0};
	double gastoPrev[4]={716000000000.00,767800000000.00,815800000000.00,878000000000.00};




    quantContemplados(salMin, gastoPrev,quantContemplado,  tam=4);
	aumentoPrev(gastoPrev, prevAumentoPerc, tam=3);
    aumentoMin(salMin, salAumentoPerc, tam=3);
	




}
