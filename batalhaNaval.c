#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.


int main() {

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 3, 3, 3, 0, 0, 0, 0}, // NAVIO HORIZONTAL (LINHA 3)
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0}, // NAVIO VERTICAL (COLUNA G)
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
      
        //IMPRESSÃO DAS COLUNAS A a J 

     printf("\n    ");

      for (int j = 0; j < 10; j++) {
             printf(" %c ", 'A' + j);
        
            }
           
            printf("\n");


         //IMPRESSÃO DAS LINHAS 1 a 10

      for (int i = 0; i < 10; i++) {
                printf("%2d  ", i + 1);
             for (int j = 0; j < 10; j++) {
                printf(" %d ", tabuleiro[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}

