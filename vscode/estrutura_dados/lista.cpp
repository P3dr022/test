#include "lista.h"
#include <stdio.h>
// Tá em c++ o código 
void Definir(Lista *L){
	L->nelem = 0;

}
 
void Destruir(Lista *L){

}
int Inserir_inicio(Lista *L,tipo_elem v){
	int i;
	int pos; 
	if(Cheia(L)){
	return 0;
}
	for(i=L->nelem;i>0;i--){//desloca todos uma posicao a frente
		L->A[i] = L->A[i-1];
		
	}
	L->A[0] = v;//insere na primeira posicao
		L->nelem++;//atualiza o numero de elementos

	L ->A[pos].info = v;
	L ->A[pos].prox = L->inicio
	L ->inicio = pos;
	return 1;
} 
int Inserir_final(Lista *L,tipo_elem v){
	if(Cheia(L))
	return 0;
	L->A[L->nelem++]=v;
	return 1;

}
int Inserir_ordenada(Lista *L, tipo_elem v){
	if(Cheia(L))
		return 0;
	if (v.chave < L->A[0].chave)
		return(Inserir_inicio(L,v));
	if(v.chave ->A[L ->nelem-1].chave)
		return(Inserir_final(L,v));

	for(i=L ->nelem; v.chave<L->A[i].chave; i--)
		L -> A[i] = L ->A[i-1];
	L->A[i] = v;
	L->nelem++;
	return 1;

}
int Remover_inicio(Lista *L){
    if(vazia(L))
		return 0; 
	for(int i = 0;i < L -> nelem - 1;i++ )
		L->A[i] = L -> A[i+1];
		L->nele--;
		return 0;
}

int Remover_final(Lista *L){
	if (Vazia(L))
		return 0; 
	L -> nelem--;
	return 0;
}
int Remover(Lista *L,int chave){
	inr i; 
	if(vazia(L))
		return 0;
	i  = Busca(L,chave);
	if(i==NIL)
	   return 0; 
	for(i = 0; i < L->nelem-1; i++)
		L ->A[i] = L->A[i+1];
		L->nelem--;
		return 1;         

}
//Busca sequêncial para qualquer lista
int Busca(Lista *L, int chave){
	for(int i = 0; i < L->nelem && L ->A[i] !=chave; i++)
	if(i==L->nelem)
	return NIL;
	return i;
}

int Busca_seq_ord(Lista *L, int chave){

	for(int i = 0; i < L->nelem && L->A[i].chave<chave; i++)
	if(i==L->nelem)
	return NIL;
	return i;
}

int Busca_binaria(Lista *L, int chave){
	int inicio = 0; fim=L->nelem-1; meio;
	meio = (inicio+fim)/2;
	while(inicio <= fim){
		if(chave == L ->A[meio].chave)
		return meio;
		if (chave > L->A[meio].chave)
		
			inicio = meio+1;
		else
			fim = meio-1; 
			meio = (inicio+fim)/2;
		
	}
}


void Exibir(Lista *L){
	int i;
	for(i = L->inicio; i!=NIL; i=L->A[i].prox){
	printf("%d ",L->A[i].info.chave);
	}
}
int Cheia(Lista *L){
	return(L->nelem==MAX);
}
int Vazia(Lista *L){
	return (L->nelem==0);
}
int Tamanho(Lista *L){
	int i; 
	cont = o;
	for(i = L->inicio; i!=NIL; i=L->A[i].prox, cont++);

	return cont;

}