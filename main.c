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

void insere_inicio(struct no*cabeca);insere_inicio(struct no *cabeca){
	
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
		
