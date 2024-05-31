#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

struct Produto {
    int id;
    char nome[50];
    char descricao[100];
    float preco_unitario;
    int quantidade_estoque;
};

void inserirProduto(struct Produto *produtos, int *numProdutos) {
    printf("Digite o ID do produto: ");
    scanf("%d", &produtos[*numProdutos].id);
    printf("Digite o nome do produto: ");
    scanf("%s", produtos[*numProdutos].nome);
    printf("Digite a descrição do produto: ");
    scanf("%s", produtos[*numProdutos].descricao);
    printf("Digite o preço unitário do produto: ");
    scanf("%f", &produtos[*numProdutos].preco_unitario);
    printf("Digite a quantidade disponível em estoque: ");
    scanf("%d", &produtos[*numProdutos].quantidade_estoque);
    (*numProdutos)++;
}

struct Produto* buscarProdutoPorId(struct Produto *produtos, int numProdutos, int id) {
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].id == id) {
            return &produtos[i];
        }
    }
    return NULL;
}

void comprarOnline(struct Produto *produtos, int numProdutos) {
    int id;
    printf("Digite o ID do produto que deseja comprar: ");
    scanf("%d", &id);
    struct Produto *produto = buscarProdutoPorId(produtos, numProdutos, id);
    if (produto == NULL) {
        printf("Produto inexistente.\n");
        return;
    }
    int quantidade;
    printf("Digite a quantidade que deseja comprar: ");
    scanf("%d", &quantidade);
    if (quantidade > produto->quantidade_estoque) {
        printf("Quantidade insuficiente em estoque.\n");
        return;
    }
    printf("Compra realizada com sucesso.\n");
    produto->quantidade_estoque -= quantidade;
}

int compararNomes(const void *a, const void *b) {
    struct Produto *produtoA = (struct Produto *)a;
    struct Produto *produtoB = (struct Produto *)b;
    return strcmp(produtoA->nome, produtoB->nome);
}

void listarProdutos(struct Produto *produtos, int numProdutos) {
    for (int i = 0; i < numProdutos - 1; i++) {
        for (int j = 0; j < numProdutos - i - 1; j++) {
            if (strcmp(produtos[j].nome, produtos[j + 1].nome) > 0) {
                struct Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }

    printf("Lista de produtos:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("ID: %d, Nome: %s, Descrição: %s, Preço Unitário: %.2f, Quantidade em Estoque: %d\n",
               produtos[i].id, produtos[i].nome, produtos[i].descricao,
               produtos[i].preco_unitario, produtos[i].quantidade_estoque);
    }
}

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int numProdutos = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir produto\n");
        printf("2. Comprar online\n");
        printf("3. Listar produtos\n");
        printf("4. Finalizar venda\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirProduto(produtos, &numProdutos);
                break;
            case 2:
                comprarOnline(produtos, numProdutos);
                break;
            case 3:
                listarProdutos(produtos, numProdutos);
                break;
            case 4:
                printf("Venda finalizada.\n");
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 5);

    return 0;
}