#include <stdio.h>

int main() {
   // Mover a torre 5 casas para a direita

    int movi = 1;
    int i = 1;
    int k= 1;

printf("Movimentação Torre:\n");

while (movi <= 5)
{
    printf("Direita\n");
    movi++;
}

printf("Movimentação Bispo:\n");

do
{
    printf("Cima,Direita\n");
    movi++;
} while (movi <= 5);


printf("Movimentação Rainha:\n");

for (int i = 1; i <= 8; i++)
{
    printf("Esquerda\n");
}

printf("Movimentação do Cavalo:\n");


while (k > 0)
{
    for (int i = 1; i <= 2; i++)
    {
        printf("Cima\n");
    }
 printf("Direita\n"); 
 k--;  
}

for (int i = 1; i > 0; i--)
{
    for (int j = 1; j <=2 ; j++)
    {
        printf("Cima\n");
    }
 printf("Direita\n");   
}



   




    return 0;
}
