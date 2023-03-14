#include <stdio.h>
#include <stdlib.h>

void inicializar(int** lista, int capacidade) {
    (*lista) = (int*) calloc(capacidade, sizeof(int));
}

int obterElementoEmPosicao(int* lista, int posicao, int tamanho) {
    if (posicao >= 0 && posicao < tamanho) {
        return lista[posicao];
    }
}

//sempre que surgir a necessidade de reatribui��o, como eh o cado de duplicarCapacidade
//n�s precisaremos de dereferencing, para que a vari�vel original lista seja atualizada
//note que inser��o � a opera��o que pode necessitar chamar duplicarCapacidade
void duplicarCapacidade(int** lista, int* capacidade) {
    (*lista) = (int*)realloc((*lista), 2 * (*capacidade) * sizeof(int));
    (*capacidade) = (*capacidade) * 2;
}

//como eu n�o consigo dinamicamente saber a qtdade de elementos alocado para meu ponteiro de lista
//ent�o uso a vari�vel capacidade para armazenar este valor
void inserirElementoNoFim(int** lista, int valor, int* tamanho, int* capacidade) {
    if ((*tamanho) == (*capacidade)) {
        duplicarCapacidade(lista,capacidade);
    }
    (*lista)[(*tamanho)] = valor;
    (*tamanho)++;
}

void inserirElementoEmPosicao(int** lista, int valor, int posicao, int* tamanho, int* capacidade) {
    if (posicao >= 0 && posicao <= (*tamanho)) {
        if ((*tamanho) == (*capacidade)) {
            duplicarCapacidade(lista,capacidade);
        }

        for (int i = (*tamanho); i > posicao; i--) {
            (*lista)[i] = (*lista)[i - 1];
        }
        (*lista)[posicao] = valor;
        (*tamanho)++;
    }
}

void atualizarElemento(int* lista, int valor, int posicao, int tamanho) {
    if (posicao >= 0 && posicao < tamanho) {
        lista[posicao] = valor;
    }
}

void removerElementoNoFim(int* tamanho) {
    if((*tamanho)>0)
        (*tamanho)--;
}

void removerElementoEmPosicao(int* lista, int posicao, int* tamanho) {
    if (posicao >= 0 && posicao < (*tamanho)) {
        while (posicao < (*tamanho) - 1) {
            lista[posicao] = lista[posicao + 1];
            posicao++;
        }
        (*tamanho)--;
    }
}

void exibirLista(int* lista, int* tamanho) {
    printf("[");
    for (int i = 0; i < (*tamanho); i++) {
        printf("%d", lista[i]);
        if (i < (*tamanho) - 1) {
            printf(", ");
        }
    }
    printf("]");
}