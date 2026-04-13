#include <stdio.h>

int main () {

    int tabuleiro[10][10];
    int navio[3] ={3, 3, 3};

    int i, j;

    // Preencher o tabuleiro com 0
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;        }
        
    }

    // Navio Horizontal (linha 2, começando na coluna 4)
    for (i = 0; i < 3; i++)
    {
        tabuleiro[2][4 + i] = navio[i];

    }
    
    // Navio vertical (coluna 7, começando na linha 5)
    for (i = 0; i < 3; i++)
    {
        tabuleiro[5 + i][7] = navio[i];
    }
   
    // Navio na diagonal descendo
    for (i = 0; i < 3; i++)
    {
        tabuleiro[1 + i][1 + i] = navio[i];
    }
    
    // navio na diagonal subindo
    for (i = 0; i < 3; i++)
    {
        tabuleiro[7 - i][2 + i] = navio[i];
    }

    // Mostrar tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");

    printf("   A B C D E F G H I J \n");

    for (i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);

        for (j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);

        }
        
        printf("\n");
    }
    

    return 0;
}