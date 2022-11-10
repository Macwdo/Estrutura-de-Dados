#include <stdio.h>  
  
void insert(int a[], int n)
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int n) 
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int array[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(array) / sizeof(array[0]);  
    printf("Antes: \n");  
    printArr(array, n);  
    insert(array, n);  
    printf("\nDepois: \n");    
    printArr(array, n);  
  
    return 0;  
}    