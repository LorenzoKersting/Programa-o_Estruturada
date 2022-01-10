#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED


void maiusculo(char *inicio);
void aumentoPrev(double *gastoPrev, float *prevAumentoPerc, int tam);
void quantContemplados(float *salMin, double *gastoPrev, float *quantContemplado, int tam);
void aumentoMin(float *salMin, float *salAumentoPerc, int tam);
void saveLog(float *data_float, int id, int tam, char *msg);

#endif /* FUNCOES_H_INCLUDED */
