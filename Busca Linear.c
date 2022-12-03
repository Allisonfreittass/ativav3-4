#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Vpesquisa(int *pVetor, int pChave , int numQuantidade);

int main()
{
    int TAM = 500;
    int vVetor[TAM];
    int Vaux;
    int vChave;

    srand(time(NULL));

    for (Vaux=0; Vaux<TAM; Vaux++)
    {
        vVetor[Vaux] = rand() % 100; // Preenche aleatóriamente de 0 a 100;
    }

    printf("\n Digite qual valor voce deseja procurar:");
    scanf("%d",&vChave);

    if ( Vpesquisa(vVetor, vChave , TAM) != -1 )
        printf("\n VALOR ENCONTRADO!\n\n "); // Se a função retornar diferente de -1, então o algoritmo não foi encontrado;
    else // Senão não foi encontrado;
        printf("\n Valor NAO encontrado!\n\n ");

}

int Vpesquisa(int *pVetor, int pChave , int numQuantidade)
{                                                        
     int Vaux;

     for ( Vaux=0; Vaux < numQuantidade; Vaux++ ) // Percorre todo o vetor;
     {
         if ( pChave == pVetor[Vaux] ) // Testa se o valor que está passando é a "chave",
         //essa chave foi necessária colocar, porque em todos os testes não estava encontrando nenhum numero;
             return Vaux; // Retorna a posição em que foi encontrado o valor;
     }

     return -1; // Retorna -1 se não for encontrado;
}