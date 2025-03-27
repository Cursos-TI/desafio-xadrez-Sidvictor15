#include <stdio.h>

void moverainha(int casarainha){
    if (casarainha > 0)
    {
        printf("Esquerda\n");
        moverainha(casarainha - 1);
    }
       
}

void movertorre(int casatorre){
    if (casatorre > 0)
    {
        printf("Direita\n");
        movertorre(casatorre - 1);
    }
    
}

void movebispo(int casabispo){
    if (casabispo > 0)
    {
        printf("Direita,Cima\n");
        movebispo(casabispo - 1);
    }
    
}




int main() {
    int c = 1;


    printf("Movimentação Rainha\n");
    moverainha(8);

    printf("Movimentação Torre\n");
    movertorre(5);

    printf("Movimentação Bispo\n");
    movebispo(5);

    printf("Movimentação Cavalo\n");
    while (c--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
     printf("Diteita\n");   
    }
    
    
    
    



    return 0;
}
