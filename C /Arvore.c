// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


/* Estrutura de nós da Arvore*/
struct Node{
    int chave;
    struct Node *esquerda, *direita;
}


/* Função auxiliar que aloca um novo nó com o dado
chave e NULL no ponteio esquerdo e ponteiro direito.*/
struct Node *novoNo(char k){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->chave = k;
    node->direita = node->esquerda= NULL;
    return node;
}
