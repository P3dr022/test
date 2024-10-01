#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TF 50 //limites

typedef struct {
    char autor[30];
    char titulo[30];
    char ISBN[13];
    int ano;
    int num_exemplares_total;
    int num_exemplares_disponiveis;
} Livro;


Livro livros[50];
int n = 0; // número de livros cadastrados
int quantidade;
int biclioteca;


// Função para carregar livros de um arquivo
void carregarLivros() {
    FILE *f = fopen("livros.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    while (!feof(f) && n < 50) {
        fscanf(f, "%s %s %s %d %d %d", livros[n].autor, livros[n].titulo, 
            livros[n].ISBN, &livros[n].ano,  &livros[n].num_exemplares_total, 
            &livros[n].num_exemplares_disponiveis);
        n++;
    }
    fclose(f);
}

// Função para salvar livros no arquivo
void salvarLivros() {
    FILE *f = fopen("livros.txt", "w");
    if (f == NULL) {
        printf("Erro ao salvar o arquivo.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %s %s %d %d %d\n",livros[i].autor,livros[i].titulo,
        livros[i].ISBN, livros[i].ano, livros[i].num_exemplares_total, 
            livros[i].num_exemplares_disponiveis);
    }
    fclose(f);
}

// Função para listar todos os livros
void listarLivros() {
    printf("Lista de livros:\n");
    for (int i = 0; i < n; i++) {
        printf("Autor: %s\nTitulo: %s\nISBN: %s\nAno: %d\nTotal de exemplares: %d\nExemplares disponiveis: %d\n\n", 
            livros[i].autor, livros[i].titulo, livros[i].ISBN, 
            livros[i].ano, livros[i].num_exemplares_total, 
            livros[i].num_exemplares_disponiveis);
    }
}

// Função para adicionar um novo livro
void adicionarLivro() {
    if (n >= TF) {
        printf("Limite de livros atingido.\n");
        return;
    }
    printf("Informe os dados do novo livro:\n");
    printf("Autor: ");
    scanf("%s", livros[n].autor);
    printf("Titulo: ");
    scanf("%s", livros[n].titulo);
    printf("ISBN: ");
    scanf("%s", livros[n].ISBN);
    printf("Ano: ");
    scanf("%d", &livros[n].ano);
    printf("Total de exemplares: ");
    scanf("%d", &livros[n].num_exemplares_total);
    livros[n].num_exemplares_disponiveis = livros[n].num_exemplares_total;
    n++;
    salvarLivros();
}

// Função para excluir exemplares de um livro pelo título
void excluirLivro() {
    char titulo[30];
    int qtd_excluir;
    
    printf("Informe o título do livro a ser alterado: ");
    scanf("%s", titulo);

    // Busca o livro pelo título
    for (int i = 0; i < n; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            printf("Quantidade total de exemplares: %d\n", livros[i].num_exemplares_total);
            printf("Exemplares disponíveis: %d\n", livros[i].num_exemplares_disponiveis);
            
            // Solicita a quantidade de exemplares a ser excluída
            printf("Informe a quantidade de exemplares a ser excluída: ");
            scanf("%d", &qtd_excluir);
            
            // Verifica se a quantidade a excluir é válida
            if (qtd_excluir > livros[i].num_exemplares_total) {
                printf("Erro: Não há tantos exemplares para excluir.\n");
                return;
            } else {
                livros[i].num_exemplares_total -= qtd_excluir;
                if (qtd_excluir > livros[i].num_exemplares_disponiveis) {
                    livros[i].num_exemplares_disponiveis = 0;  // Se a quantidade a excluir exceder os disponíveis, ajusta para zero.
                } else {
                    livros[i].num_exemplares_disponiveis -= qtd_excluir;
                }

                // Se todos os exemplares forem excluídos, remover o livro da lista
                if (livros[i].num_exemplares_total == 0) {
                    for (int j = i; j < n - 1; j++) {
                        livros[j] = livros[j + 1];
                    }
                    n--;  // Diminui o número total de livros
                    printf("Todos os exemplares deste livro foram excluídos.\n");
                } else {
                    printf("Exemplares excluídos com sucesso.\n");
                }

                salvarLivros();
                return;
            }
        }
    }
    
    printf("Livro não encontrado.\n");
}

// Função para atualizar informações de um livro
void atualizarLivro() {
    char titulo[30];
    printf("Informe o título do livro a ser atualizado: ");
    scanf("%s", titulo);
    for (int i = 0; i < n; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            printf("Informe os novos dados:\n");
            printf("Autor: ");
            scanf("%s", livros[i].autor);
            printf("Ano: ");
            scanf("%d", &livros[i].ano);
            printf("Total de exemplares: ");
            scanf("%d", &livros[i].num_exemplares_total);
            livros[i].num_exemplares_disponiveis = livros[i].num_exemplares_total;
            salvarLivros();
            printf("Livro atualizado com sucesso.\n");
            return;
        }
    }
    printf("Livro não encontrado.\n");
}


// Função principal
int main() {
    int opc; 
    carregarLivros();
       
    while(opc!=5){
    printf("\n\nMenu: ");
    printf("\n1 - Lista todos os livros. ");
    printf("\n2 - Cadastrar novo livro.");
    printf("\n3 - Excluir Livro. ");
    printf("\n4 - Atualizar informação do livros ");
    printf("\n5 - Sair. ");
    printf("\nOpção?: "); scanf("%d",&opc);
    switch(opc){
            case 1:
                listarLivros();
                break;
            case 2:
                adicionarLivro();
                break;
            case 3:
                excluirLivro();
                break;
            case 4:
                atualizarLivro();
                break;
            case 5:
                salvarLivros();
                printf("Saindo...\n");
                break;
        }
    }
    return 0;
}