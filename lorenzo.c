#include <stdio.h>
#include <stdlib.h>
#include "lorenzo.h"

void maiusculo(char *inicio){
    int i;
	for(i=0; i<33; i++){
		if(*(inicio+i) == '\0'){
			i = 33;
		}else{
            if (*(inicio+i) >= 'a' && *(inicio+i) <= 'z') {
                printf("%c", *(inicio+i)-32); //-32 POIS TABELA ASCII TEM DIFERENCA DE 32 PARA MAIUSCULO DE MINUSCULO
            }else{
                printf("%c", *(inicio+i));
            }
		}
	}
	printf("\n");
	printf("\n");
}

void quantContemplados(float *salMin, double *gastoPrev, float *quantContemplado, int tam){
	int id=0;
	int  i=0;
	char msg[33];
	
	printf("MSG contemplados:   ");
	scanf("%s", msg);
	
	for (i=0; i<tam; i++) {
    	 quantContemplado[i] = (gastoPrev[i])/ (salMin[i]);
	}
    
	
      
	for (i=0; i<tam; i++) {
       // printf("%i pessoas\n \n", quantContemplado[i]);
	}
	
	saveLog(quantContemplado, id=1, tam, msg);
	
}

void aumentoPrev(double *gastoPrev,  float *prevAumentoPerc, int tam){
    int i=0;
    int id=0;
    char msg[33];
	
	printf("MSG aumento prev:   ");
	scanf("%s", msg);
	
    for (i=0; i<tam; i++) {
    	prevAumentoPerc[i] = 100 * (gastoPrev[i+1]) / (gastoPrev[i]) - 100;
	}
	
	for(i=0; i<tam; i++){
	//	printf("TESTE 1:  %.2lf % \n", prevAumentoPerc[i]);
		
	}
	
	saveLog(prevAumentoPerc, id=2, tam, msg);
    
}

void aumentoMin(float *salMin, float *salAumentoPerc, int tam){
    int i=0;
    int id=0;
    char msg[33];
	
	printf("MSG aumento sal min:   ");
	scanf("%s", msg);
    for (i=0; i<tam; i++) {
        salAumentoPerc[i] = 100 * (salMin[i+1]) / (salMin[i]) - 100;
	}
	
	for(i=0; i<tam; i++){
	//	printf("TESTE 2:   %.2f \n", salAumentoPerc[i]);
	
	}
	
	saveLog(salAumentoPerc, id=3, tam, msg);
   
}




void saveLog(float *data_float, int id, int tam, char *msg){
	
	FILE *arq;
    int i;
    int result;
    printf("%i", tam);
    printf("%i \n", id);
    arq = fopen("relatorio.txt", "a");  
    if (arq == NULL) 
    {
         printf("Problemas na CRIACAO do arquivo\n");
     
    }
    
    if (result == EOF){
    	printf("Erro na Gravacao\n");
	}
    
    
    if(id == 1){
    	//result = fprintf(arq,"Quantidade de pessoas contempladas pela previdencia: \n");
    	
    	for(i=0; i<33; i++){
			if(msg[i] == '\0'){
				i = 33;
			}else{
	                result = fprintf(arq, "%c", msg[i]);   
			}	
		}
		result = fprintf(arq, "\n");
    	
    	for(i=0; i<tam; i++){
		result = fprintf(arq,"%f pessoas\n", data_float[i]);
		}
		
		result = fprintf(arq,"-----------------------------------------------------------\n");
	}
    
	else if(id==2){
		//result = fprintf(arq,"Aumento Percentual de Gasto Previo: \n");
		
		for(i=0; i<33; i++){
			if(msg[i] == '\0'){
				i = 33;
			}else{
	                result = fprintf(arq, "%c", msg[i]);   
			}	
		}
		
		result = fprintf(arq, "\n");
		for(i=0; i<3; i++){
		result = fprintf(arq, "%.2lf % \n", data_float[i]);
		}	
		
			result = fprintf(arq, "-----------------------------------------------------------\n");
	}
	
	else if(id==3){
		//result = fprintf(arq, "Aumento Percentual Salario minimo: \n");
		for(i=0; i<33; i++){
			if(msg[i] == '\0'){
				i = 33;
			}else{
	                result = fprintf(arq, "%c", msg[i]);   
			}	
		}
		
		result = fprintf(arq, "\n");
		for(i=0; i<3; i++){	
		result = fprintf(arq, "%.2f % \n", data_float[i]);
		}

	}
	



	fclose(arq); 
}
