#include<stdio.h>


float calcularAreaQuadrado(float x, float y);

int main(){

	float area = calcularAreaQuadrado(10.0, 20.0);	

	printf("A area eh %.2f", area);
	
	return 0;
	
} //FIM DO PROGRAMA

float calcularAreaQuadrado(float x, float y){
	
	float area = x * y;
	
	return area;
}
