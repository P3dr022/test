#include<stdio.h>


int main(){
	int anofab, contnovos=0, idade, contodos=0, contnissan=0, contcaro=0;
	char fabric, cor, opcao='S';
	float valorvenda, somavenda=0, somaidade=0, perc;
	while (opcao=='S'||opcao=='s'){
		printf("\nAno de fabricacao: ");scanf("%d",&anofab);
		printf("\nFabricante (G,H,V,F,T,N,O):");fabric=getche();
		printf("\nCor do carro(P/B/A/O):");cor=getche();
		printf("\nQual o valor do carro vendido? ");scanf("%f",&valorvenda);
		
		//item A qtdade carros vendidos e o montante
		if (anofab==2023){
			contnovos++;
			somavenda = somavenda + valorvenda;
		}
		// item B media tempo de uso de todos os carros
		idade = 2023-anofab; // tempo de uso do carro
		somaidade = somaidade + idade;
		contodos++;
		// item C contar carros usados prata da marca Nissan
		if ((anofab<2023)&&(cor=='P'||cor=='p')&&(fabric=='N'||fabric=='n')) 
		   contnissan++;
		// item D contar quantos carros tiveram valor de venda superior a 100 mil
		if (valorvenda > 100000.00)
		      contcaro++;
		//      
		printf("\nDeseja continuar(S/N)?");
		opcao=getchar();
	}
	// exibir o item A qtdade de carros zero e o montante
	printf("\n\nQtdade de carros zeros=%d    Montante das venda=%f",contnovos,somavenda);
	// exibir item B calcular a media do tempo de uso dos carros e exibir
	float mediaidade = somaidade / contodos;
	printf("\nContagem carros=%d   Soma idade=%f    Media tempo de uso=%f",
	                                                 contodos,somaidade,mediaidade);
	//contagem dos carros usados da cor prata do fabricante Nissan
	printf("\nCarros usados cor prata da Nissan = %d",contnissan);
	// calcular e exibir o percentual de carros com valor de venda > 100 mil
	perc = (contcaro*100)/contodos;
	printf("\n Percentual de carros cujo valor de venda > 100 mil = %f",perc);
}