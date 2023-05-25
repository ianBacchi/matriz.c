#include<stdio.h>
#include<stdlib.h>

/* Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva:
 O valor e a localização (linha, coluna) do maior valor encontrado
na matriz.*/

int main(){

    //matriz
    int matriz[5][5];
    //variavel
    int maior;

    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("digite o valor intero para a posição[%i][%i]",l,c);
            scanf("%i",&matriz[l][c]);
        }//for alinhado
        
    }//for

    maior = matriz[0][0];

    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (maior < matriz[l][c])
            {
                maior = matriz[l][c];
            }//if
            
        }//for alinhado
        
    }//for

    printf("O maior numero da matriz é %i\n",maior);

    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (maior == matriz[l][c])
            {
                printf("O maior numero esta na linha %i e coluna %i\n",l,c);
            }//if
            
        }//for alinhado
        
    }//for
    
    



    return 0;
}//main
