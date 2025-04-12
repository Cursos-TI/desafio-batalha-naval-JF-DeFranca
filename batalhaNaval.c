#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.



#define TAM 10
#define AGUA 0
#define NAVIO 3
#define TAMANHO_NAVIO 3


int main() {

    int tabuleiro[TAM][TAM];

    // DEFININDO O TABULEIRO COMPLETO COM AGUA (0)
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            tabuleiro[i][j] = AGUA;
        }  
    }

    //NAVIO 1 NA HORIZONTAL
    for (int j = 0; j < TAMANHO_NAVIO; j++){
        tabuleiro[0][j] = NAVIO;

    }
    
    //NAVIO 2 NA VERTICAL
    for (int i = 0; i < TAMANHO_NAVIO; i++){
        tabuleiro[1+i][5] = NAVIO;

    }
    
    //NAVIO 3 NA DIAGONAL

    for (int i = 0; i < TAMANHO_NAVIO; i++){
        int linha = 5 + i;
        int coluna = 1 + i;

        if (linha < TAM && coluna < TAM){
            tabuleiro [linha][coluna] = NAVIO;
        }
             
    }

    //NAVIO 4 NA DIAGONAL INVERSA

        for (int i = 0; i < TAMANHO_NAVIO; i++){
            int linha = i;
            int coluna = 9 - i;

            if (linha < TAM && coluna >= 0){
                tabuleiro [linha][coluna] = NAVIO;
            }
                
        }
        

        //SUPER PODER - OCTAEDRO
        for (int i = 0; i < TAMANHO_NAVIO; i++){
            for (int j = 0; j < TAMANHO_NAVIO; j++){
                
                if (i == 1) {
                    tabuleiro[7 + i][j] = NAVIO;
                } else if (j == 1) {               
                    tabuleiro[7 + i][j] = NAVIO;
          
                }
            }      
        }


        //SUPER PODER - CRUZ
        for (int i = 0; i < 3; i++) {  
            for (int j = 0; j < 5; j++) { 
                if (i == 1) {  
                    tabuleiro[2 + i][1 + j] = NAVIO;
                }
                if (j == 1) {  
                    tabuleiro[3 + i][j] = NAVIO;
                }
            }
        }
                
                










    // IMPRESSÃO DO TABULEIRO 

    printf("\nTABULEIRO DE BATALHA NAVAL\n");
    printf("ÁGUA = 0 NAVIO = 3\n");
    printf("\n");
    

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("%2d ", tabuleiro[i][j]);
            
        }
        printf("\n");
    }
    


    
 

    return 0;
}

