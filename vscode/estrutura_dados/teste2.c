#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TF 50 //limite de livros

typedef struct {
    char autor[40];
    char titulo[40];
    char ISBN[13];
    int ano;
    int num_exemplares_total;
    int num_exemplares_disponiveis;
} Livro;

Livro livros[TF];
int n = 0; // número de livros cadastrados

// Função para carregar livros de um arquivo
void carregarLivros() {
    FILE *f = fopen("livros2.txt", "r+");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    while (!feof(f) && n < TF) {
        fscanf(f, "%s %s %s %d %d %d", livros[n].autor, livros[n].titulo, 
            livros[n].ISBN, &livros[n].ano, &livros[n].num_exemplares_total, 
            &livros[n].num_exemplares_disponiveis);
        n++;
    }

    fclose(f);
}

// Função para salvar livros no arquivo
void salvarLivros() {
    FILE *f = fopen("livros2.txt", "w");
    if (f == NULL) {
        printf("Erro ao salvar o arquivo.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %s %s %d %d %d\n", livros[i].autor, livros[i].titulo, 
            livros[i].ISBN, livros[i].ano, livros[i].num_exemplares_total, 
            livros[i].num_exemplares_disponiveis);
    }
    fclose(f);
}

// Função para listar todos os livros
void listarLivros() {
    printf("\nLista de livros:\n");
    for (int i = 0; i < n; i++) {
        printf("____________________\n");
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
                    livros[i].num_exemplares_disponiveis = 0;  
                } else {
                    livros[i].num_exemplares_disponiveis -= qtd_excluir;
                }

                if (livros[i].num_exemplares_total == 0) {
                    for (int j = i; j < n - 1; j++) {
                        livros[j] = livros[j + 1];
                    }
                    n--;  
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

// Função para buscar livro por título
void buscarLivroPorTitulo() {
    char titulo[30];
    printf("Informe o título do livro que deseja buscar: ");
    scanf("%s", titulo);
    
    for (int i = 0; i < n; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            printf("Livro encontrado:\n");
            printf("Autor: %s\nTitulo: %s\nISBN: %s\nAno: %d\nTotal de exemplares: %d\nExemplares disponíveis: %d\n", 
                   livros[i].autor, livros[i].titulo, livros[i].ISBN, 
                   livros[i].ano, livros[i].num_exemplares_total, 
                   livros[i].num_exemplares_disponiveis);
            return;
        }
    }
    printf("Livro não encontrado.\n");
}

// Função para realizar empréstimo
void realizarEmprestimo() {
    char titulo[30];
    printf("Informe o título do livro que deseja emprestar: ");
    scanf("%s", titulo);
    
    for (int i = 0; i < n; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            if (livros[i].num_exemplares_disponiveis > 0) {
                livros[i].num_exemplares_disponiveis--;
                salvarLivros();
                printf("Empréstimo realizado com sucesso. Exemplares disponíveis agora: %d\n", livros[i].num_exemplares_disponiveis);
            } else {
                printf("Não há exemplares disponíveis para empréstimo.\n");
            }
            return;
        }
    }
    printf("Livro não encontrado.\n");
}

// Função para realizar devolução
void realizarDevolucao() {
    char titulo[30];
    printf("Informe o título do livro que deseja devolver: ");
    scanf("%s", titulo);
    
    for (int i = 0; i < n; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            if (livros[i].num_exemplares_disponiveis < livros[i].num_exemplares_total) {
                livros[i].num_exemplares_disponiveis++;
                salvarLivros();
                printf("Devolução realizada com sucesso. Exemplares disponíveis agora: %d\n", livros[i].num_exemplares_disponiveis);
            } else {
                printf("Todos os exemplares já estão devolvidos.\n");
            }
            return;
        }
    }
    printf("Livro não encontrado.\n");
}

// Função principal
int main() {
    int opc;
    carregarLivros();
       
    while(opc != 8){
        printf("\n\nMenu: ");
        printf("\n1 - Listar todos os livros. ");
        printf("\n2 - Cadastrar novo livro.");
        printf("\n3 - Excluir livro.");
        printf("\n4 - Atualizar informações.");
        printf("\n5 - Buscar livro por título.");
        printf("\n6 - Realizar empréstimo.");
        printf("\n7 - Realizar devolução.");
        printf("\n8 - Sair.");
        printf("\nOpção?: "); 
        scanf("%d", &opc);
        
        switch(opc) {
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
                buscarLivroPorTitulo();
                break;
            case 6:
                realizarEmprestimo();
                break;
            case 7:
                realizarDevolucao();
                break;
            case 8:
                salvarLivros();
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    }
    return 0;
}
