#include "funcao.h"

int main(){
	fila *lista;
	int op;
	int n;
	lista=criarFila();
	do{
		system("cls");
		printf("1-INSERIR ELEMENTO\n");
		printf("2-REMOVER ELEMENTO\n");
		printf("3-MOSTRAR FILA\n");
		printf("4-BUSCAR ELEMENTO\n");
		printf("5-MOSTRAR INICIO DA FILA\n");
		printf("6-MOSTRAR FINAL DA FILA\n");
		printf("7-LIBERAR FILA\n");
		printf("0-SAIR\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("DIGITE UM NUMERO:\n");
				scanf("%d",&n);
				lista=inserirElemento(lista,n);
				system("PAUSE");
				break;
			case 2:
				lista=removerElemento(lista);
				system("PAUSE");
				break;
			case 3:
				mostrarElemento(lista);
				system("PAUSE");
				break;
			case 4:
					fila *aux;
					aux=criarFila();
					printf("DIGITE UM NUMERO:\n");
					scanf("%d",&n);
				   	aux=buscarElemento(lista,n);
				   	if(aux!=NULL){
				   		printf("NUMERO %d ENCONTRADO!\n", n);
					}else{
						printf("NAO ENCONTRADO!\n");
					}
				system("PAUSE");
				break;
			case 5:
			   	mostrarInicioDaFila(lista);
				system("PAUSE");
				break;
			case 6:
				mostrarFinalDaFila(lista);
				system("PAUSE");
				break;
			case 7:
				lista=liberarFila(lista);
				if(lista==NULL)
					printf("LISTA LIBERADA!\n");
				system("PAUSE");
				break;
			case 0:
				printf("SAINDO DO SISTEMA...\n");
				printf("\n");
				break;
			default:
				printf("NUMERO INVALIDO!\nTENTE NOVAMENTE!\n");
				system("PAUSE");
				break;
		}
	}while(op!=0);
	return 0;
}