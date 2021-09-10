#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <queue>
using namespace std;

void atualizar(struct noBst* no);
struct noBst* balancear(struct noBst* no);
struct noBst* rebalancearEsqEsq(struct noBst* no);
struct noBst* rebalancearEsqDir(struct noBst* no);
struct noBst* rebalancearDirDir(struct noBst* no);
struct noBst* rebalancearDirEsq(struct noBst* no);

/**
 * Embora durante a aula eu disse que precisar�amos
 * das vari�veis alturaEsq e alturaDir, na verdade n�o
 * � necess�rio. Depois de implementar que percebi algo
 * �bvio: para pegar a altura de uma sub-�rvore basta
 * obter o valor da vari�vel altura na sub-�rvore. (:
 **/
struct noBst {
    int val;
    int altura;    
    int balanco;
    struct noBst* esq;
    struct noBst* dir;
};

/**
 * Funcao que aloca um novo noBst, e
 * ajusta os ponteiros esq e dir para NULL,
 * e vari�veis altura e balanco para 0.
 **/
struct noBst* alocarNovoNo(int val) {
    //IMPLEMENTAR
}

/**
 * Funcao que rotaciona uma arvore para a
 * direita e retorna a nova raiz.
 **/
struct noBst* rotacaoDireita(struct noBst* arvore) {
    //IMPLEMENTAR
}

/**
 * Funcao que rotaciona uma arvore para a
 * esquerda e retorna a nova raiz.
 **/
struct noBst* rotacaoEsquerda(struct noBst* arvore) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma BST, e
 * insere um novo valor na BST. Tamanho deve
 * ser incrementado.
 * Ambos tamanho e raiz s�o passados por refer�ncia.
 * Lembrar de atualizar altura e fator de balanco dos n�s 
 * antecessores do n� inserido, bem como balance�-los caso
 * seja necess�rio.
 * Dica: reutilizar a fun��o de inserir de BST, e lembrar
 * de como usar inteligentemente a recurs�o para conseguir
 * atualizar e balancear os n�s antecessores.
 **/
void inserir(struct noBst** raiz, int val, int* tamanho) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma BST e atualiza sua altura 
 * e fator de balan�o.
 * Lembre que a altura das sub-�rvores direita e esquerda 
 * n�o v�o mudar, por isso a implementa��o n�o � t�o complicada.
 **/
void atualizar(struct noBst* no) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma BST e identifica em qual caso
 * ela se encaixa para executar os procedimentos de balanceamento
 * corretos:
 *      - Caso 1: esquerda-esquerda e esquerda-cheio
 *      - Caso 2: esquerda-direita
 *      - Caso 3: direita-direita e direita-cheio
 *      - Caso 4: direita-esquerda
 * Dica: usar fator de balan�o do n� e de uma de suas sub-�rvores
 * para descobrir qual � o caso.
 **/
struct noBst* balancear(struct noBst* no) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma BST e usa as rota��es
 * apropriadas para balancear uma �rvore desbalanceada no caso 1.
 * Lembre-se que durante o balanceamento a raiz muda
 * e essa fun��o deve retornar a nova raiz.
 **/
struct noBst* rebalancearEsqEsq(struct noBst* no) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma BST e usa as rota��es
 * apropriadas para balancear uma �rvore desbalanceada no caso 2.
 * Lembre-se que durante o balanceamento a raiz muda
 * e essa fun��o deve retornar a nova raiz.
 **/
struct noBst* rebalancearEsqDir(struct noBst* no) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma BST e usa as rota��es
 * apropriadas para balancear uma �rvore desbalanceada no caso 3.
 * Lembre-se que durante o balanceamento a raiz muda
 * e essa fun��o deve retornar a nova raiz.
 **/
struct noBst* rebalancearDirDir(struct noBst* no) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma BST e usa as rota��es
 * apropriadas para balancear uma �rvore desbalanceada no caso 4.
 * Lembre-se que durante o balanceamento a raiz muda
 * e essa fun��o deve retornar a nova raiz.
 **/
struct noBst* rebalancearDirEsq(struct noBst* no) {
    //IMPLEMENTAR
}

/**
 * Funcao que retorna o maior valor de uma �rvore.
 * Mesma implementa��o da BST.
 **/
int max(struct noBst* raiz) {
    //IMPLEMENTAR
}

/**
 * Funcao que retorna o menor valor de uma �rvore.
 * Mesma implementa��o da BST.
 **/
int min(struct noBst* raiz) {
    //IMPLEMENTAR
}

/**
 * Funcao que retorna a altura de uma �rvore.
 * A altura de uma �rvore � dada pela quantidade
 * de arestas entre a raiz e a folha mais distante.
 * Mesma implementa��o da BST.
 **/
int altura(struct noBst* raiz) {
    //IMPLEMENTAR
}

/**
 * Funcao que recebe a raiz de uma �rvore, e
 * remove o n� que contem o valor passado como
 * argumento. Tamanho deve ser decrementado.
 * Tamanho � passado por refer�ncia.
 * Lembrar de atualizar altura e fator de balanco dos n�s
 * antecessores do n� removido, bem como balance�-los caso
 * seja necess�rio.
 * Dica: reutilizar a fun��o de remover de BST, e lembrar
 * de como usar inteligentemente a recurs�o para conseguir
 * atualizar e balancear os n�s antecessores. 
 **/
struct noBst* remover(struct noBst* raiz, int val, int* tamanho) {
   //IMPLEMENTAR
}

void imprimir(queue<struct noBst*> nosImpressao);

/**
* Fun��o que imprime a �rvore.
* Pode ser �til para depura��o.
**/
void imprimir(struct noBst* raiz) {
    queue<struct noBst*> nosImpressao;
    nosImpressao.push(raiz);
    imprimir(nosImpressao);
}

void imprimir(queue<struct noBst*> nosImpressao) {

    queue<struct noBst*> nosImpressaoProxNivel;

    while (!nosImpressao.empty()) {
        struct noBst* noImpressao = nosImpressao.front();
        //add filhos na fila
        if(noImpressao != NULL){
            if (noImpressao->esq != NULL) 
                nosImpressaoProxNivel.push(noImpressao->esq);
            else
                nosImpressaoProxNivel.push(NULL);
            if (noImpressao->dir != NULL) 
                nosImpressaoProxNivel.push(noImpressao->dir);
            else
                nosImpressaoProxNivel.push(NULL);
        }
        nosImpressao.pop();

        if (noImpressao != NULL) {
            cout << to_string(noImpressao->val) << " | ";
        }
        else {
            cout << "N | ";
        }
    }
    cout << endl << endl;
    if(!nosImpressaoProxNivel.empty())
        imprimir(nosImpressaoProxNivel);
}