#include <stdio.h>

int main() {
   // Mover a torre 5 casas para a direita

    int movi = 1;
    int i = 1;

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
    i++;
} while (i <= 5);


printf("Movimentação Rainha:\n");

for (int i = 1; i <= 8; i++)
{
    printf("Esquerda\n");
}

   




    return 0;
}
