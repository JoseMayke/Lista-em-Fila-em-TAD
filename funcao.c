#include "funcao.h"

fila *criarFila(){
	return NULL;
}

fila *liberarFila(fila *lista){
	if(lista!=NULL){
		fila *i;
		while(lista!=NULL){
			i=lista;
			lista=lista->prox;
			free(i);
		}
		free(lista);
		lista=NULL;
		i=NULL;
	}
	return lista;
}

void mostrarElemento(fila *lista){
	if(lista!=NULL){
		fila *i;
		i=lista;
		printf("OS ELEMENTOS DA LISTA SAO:\n");
		while(i!=NULL){
			printf("%d  ",i->info);
			i=i->prox;
		}
		printf("\n");
	}else{
		printf("LISTA VAZIA!\n");
	}
}

fila *ordemCrescente(fila *lista){
	fila *i,*j;
	int aux;
	for(i=lista;i!=NULL;i=i->prox){
		for(j=lista;j!=NULL;j=j->prox){
			if(i->info<j->info){
				aux=i->info;
				i->info=j->info;
				j->info=aux;
			}
		}
	}
	return lista;
}

fila *inserirElemento(fila *lista, int n){
	fila *novo;
	novo=(fila*)malloc(sizeof(fila));
	novo->info=n;
	novo->prox=lista;
	novo=ordemCrescente(novo);
	printf("NUMERO INSERIDO!\n");
	return novo;
}

fila *removerElemento(fila *lista){
	if(lista!=NULL){
		fila *aux;
		aux=lista;
		lista=lista->prox;
		free(aux);
		aux=NULL;
		printf("NUMERO REMOVIDO!\n");
	}else{
		printf("LISTA VAZIA!\n");
	}
	return lista;
}

fila *buscarElemento(fila *lista,int n){
	if(lista!=NULL){
		fila *i;
		for(i=lista;i!=NULL;i=i->prox){
			if(n==i->info)
				return i;
		}
	}else{
	printf("LISTA VAZIA!\n");
	}
	return NULL;
}

void mostrarInicioDaFila(fila *lista){
	if(lista!=NULL){
		printf("INICIO DA FILA: %d\n", lista->info);
	}else{
		printf("LISTA VAZIA!\n");
	}
}

void mostrarFinalDaFila(fila *lista){
	if(lista!=NULL){
		fila *i;
		for(i=lista;i!=NULL;i=i->prox){
			if(i->prox==NULL){
				printf("FINAL DA FILA: %d\n", i->info);
			}
		}
	}else{
		printf("LISTA VAZIA!\n");
	}
}



































