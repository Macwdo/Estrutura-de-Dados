#include <stdio.h>
#include <stdlib.h>		
#include <time.h>		
void troca(int array[], int i, int j){
    int auxiliar = array[i];
    array[i] = array[j];
    array[j] = auxiliar;
} 
int dividir (int array[], int inicio, int fim) {
int pivo, pivo_indice, i;
pivo = array[fim];		
  pivo_indice = inicio;
for (i = inicio; i < fim; i++)
    {
if (array[i] <= pivo)
	{
	    troca (array, i, pivo_indice);
	    	    pivo_indice++;
}
}
    troca (array, pivo_indice, fim);
return pivo_indice;
}
int dividir_random (int array[], int inicio, int fim) {
    int pivo_indice = (rand () % (fim - inicio + 1)) + inicio;
    troca (array, pivo_indice, fim);
    return dividir (array, inicio, fim);
}