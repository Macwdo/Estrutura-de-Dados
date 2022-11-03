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
/* Esta função testa se a árvore binária é uma árvore binária completo.*/

bool arvoreCheia(stuct Node* root){
    // Se a arvore estiver vazia
    if (root == NULL)
    return true;
    
    // Se o nó for uma folha
    if (root->esquerda == NULL && root->direita == NULL)
    return true;
    
    /* Se ambos não forem NULL e as subarvores estão cheias. */
    if((root->esquerda)&&(root->direita))
    return (arvoreCheia(root->esquerda)&& arvoreCheia(root->direita));
    
    // Nos chegamos quando nenhuma das condições funcionam
    return false;
    
}



