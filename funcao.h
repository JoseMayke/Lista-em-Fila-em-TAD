#include <stdio.h>
#include <stdlib.h>

typedef struct fila fila;
struct fila{
	int info;
	fila *prox;
};
fila *criarFila();
fila *ordemCrescente(fila *lista);
fila *inserirElemento(fila *lista, int n);
fila *removerElemento(fila *lista);
void mostrarElemento(fila *lista);
fila *buscarElemento(fila *lista,int n);
void mostrarInicioDaFila(fila *lista);
void mostrarFinalDaFila(fila *lista);
fila *liberarFila(fila *lista);

