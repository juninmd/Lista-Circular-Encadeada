#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Remover o primeiro da lista e reotnrar o valor removido 

Busca um elemento em uma lista circular e retornar se encontrou ou não*/

struct no{
  struct no *cabeca;
  struct no *prox;
  int info;
};

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"portuguese");
	int tecla = 0;
	struct no *cabeca;
	 
	
	do{
		menuPrincipal();
		printf("Insira a opcao ->");
		scanf("%d",&tecla);
		menuPrincipal();
		
		switch(tecla){
			case 1:{
				insere_inicio(&cabeca);
				break;
			}
			 
		}
	}while(tecla != 9);
   
}

/*
 	Menu principal é responsável por printar
 	na tela, todas as opções disponíveis
*/
void menuPrincipal(){
	system("cls");
	printf("--- Lista Circular ---\n\n");
	printf("1) Inserir Inicio\n");
	printf("2) Listar\n");
	printf("3) Listar reverso\n");
	printf("4) Inserir no final\n");
	printf("\n9) Sair\n\n");
}

void insere_inicio(struct no *cabeca){
	
	int x = 0;
	scanf("%d",&x);
	struct no *p;
	if((p=malloc(sizeof(struct no))) == NULL){
		printf("Erro alocacao de memoria!");
	}
	else{
		p->info = x;
		p->prox = cabeca->prox;
		cabeca->prox = p;	
	}
}
void imprimir(struct no *cabeca){
	struct no *p;
	p = cabeca -> prox;
	while(p != cabeca){
		printf("%d  ", p-> info);
		p = p -> prox;
	}
}
		
