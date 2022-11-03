// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


/* Estrutura de nós da Arvore*/
struct Node{
    int chave;
    struct Node *esquerda, *direita;
};


/* Função auxiliar que aloca um novo nó com o dado
chave e NULL no ponteio esquerdo e ponteiro direito.*/
struct Node *novoNo(char k){
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->chave = k;
    node->direita = node->esquerda= NULL;
    return node;
};
/* Esta função testa se a árvore binária é uma árvore binária completo.*/

bool arvoreCheia(struct Node* root){
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
};

int main(){
    struct Node* root = NULL;
    root = novoNo(10);
    root->esquerda = novoNo(20);
    root->direita = novoNo(30);
    
    root->esquerda->direita = novoNo(40);
    root->esquerda->esquerda = novoNo(50);
    root->direita->esquerda = novoNo(60);
    root->direita->direita = novoNo(70);

};


// Contagem do numero de nós
int contaNumeroNos(struct Node *root){
    if(root==NULL)
        return(0);
    return (1+ contaNumeroNos(root->esquerda)+contaNumeroNos(root->direita));
};

//Verifique se a árvore é uma árvore binária completa
bool verificaCompleto(struct Node *root, int index, int numeroNos){
    if(root == NULL)return true;
    
    if(index>= numeroNos)return false;
    
    return(verificaCompleto(root->esquerda,2*index+1,numeroNos) && verificaCompleto(root->direita,2 * index+2,numeroNos));
};

int main1(){
    struct Node *root = NULL;
    root = novoNo(1);
    root->esquerda = novoNo(2);
    root->direita = novoNo(3);
    root->esquerda->esquerda = novoNo(4);
    root->direita->direita = novoNo(5);
    root->direita->esquerda = novoNo(6);
    
    int node_count = contaNumeroNos(root);
    int index = 0;
    
    if (verificaCompleto(root, index, node_count)){
        printf("A arvore binaria eh uma arvore binaria completa\n");}
    else{
        printf("A arvore binaria não eh uma aravore binaria completa\n");}
    
};









