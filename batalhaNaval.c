#include <stdio.h>
    
int main(){

        // iniciar variaveis , matirz e vetor(para definir as colunas visiveis no codigo)
        int barco1 = 3;
        int barco2 = 3;
        int linha [10]={0,1,2,3,4,5,6,7,8,9,};
        int tabuleiro[10][10]={
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0}

        };
             //definir a posicao dos barcos no tabuleiro
             tabuleiro [9][7] = barco2;
             tabuleiro [9][8] = barco2;
             tabuleiro [9][9] = barco2;

             tabuleiro [0][4] = barco1;
             tabuleiro [1][4] = barco1;
             tabuleiro [2][4] = barco1;

            
            //inicio do tabuleiro no terminal + linhas visiveis no terminal)
            printf("    ----Tabuleiro----\n   ̲0̲ ̲1̲ ̲2̲ ̲3̲ ̲4̲ ̲5̲ ̲6̲ ̲7̲ ̲8̲ ̲9\n");
             
            

        for (int i=0 ; i<10 ;i++){
            printf("%d| " , linha[i]);
            for (int j=0 ; j<10 ; j++){
                
                printf("%d " , tabuleiro[i][j]);
            

            }
           
            printf("|%d" , linha[i]);
            printf("\n");
            
        }
        printf("   ___________________\n   0 1 2 3 4 5 6 7 8 9\n");
        //final do tabuleiro + linhas finais no terminal
        
        //localizando os barcos no tabuleiro
        printf("\n");
        printf("O primeiro barco esta localizado nas posicoes : (0,4) , (1,4) , (2,4)\n");
        printf("O segundo barco esta localizado nas posicoes : (9,7) , (9,8) , (9,9)\n");




      return 0;  
    }