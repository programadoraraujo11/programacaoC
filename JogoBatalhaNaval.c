#include <stdio.h>

#define LINHA 10
#define COLUNA 10


int main () {

    int tabuleiro[LINHA][COLUNA];
    int i, j;
    int coneLinha = 7, coneColuna = 2;
    int cruzLinha = 3, cruzColuna = 3; 
    int octaLinha = 6, octaColuna = 7;


    // Preencher o tabuleiro com 0
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            tabuleiro[i][j] = 0;   
            
           // Cone 
        if ((i == coneLinha && j == coneColuna) ||
        (i == coneLinha + 1 && j >= coneColuna - 1 && j <= coneColuna + 1) ||
        (i == coneLinha + 2 && j >= coneColuna - 2 && j <= coneColuna + 2)) 
        {
            tabuleiro[i][j] = 1;
        }
        // Cruz
        if ((i >= cruzLinha - 2 && i <= cruzLinha + 2 && j == cruzColuna) ||
        (j >= cruzColuna - 2 && j <= cruzColuna + 2 && i == cruzLinha))   
        
        {
             tabuleiro [i][j] = 2;
        }

        // Octaedro
        if ((i == octaLinha - 2 && j == octaColuna) ||
        (i == octaLinha - 1 && j >= octaColuna - 1 && j <= octaColuna + 1) ||
        (i == octaLinha && j >= octaColuna - 2 && j <= octaColuna + 2) ||
        (i == octaLinha + 1 && j >= octaColuna - 1 && j <= octaColuna + 1) ||
        (i == octaLinha + 2 && j == octaColuna))
        {
            tabuleiro[i][j] = 3;
        }
        
        }
    }

    
    // Mostrar tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");

    printf("   A B C D E F G H I J \n");

    for (i = 0; i < LINHA; i++)
    {
        printf("%2d ", i + 1);

        for (j = 0; j < COLUNA; j++)
        {
            printf("%d ", tabuleiro[i][j]);

        }
        
        printf("\n");
    }
    

    return 0;
}