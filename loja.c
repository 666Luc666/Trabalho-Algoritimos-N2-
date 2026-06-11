//CODIGO FEITO POR LUCAS SILVERIO E RODRIGO CARVALHO DE SA TELES
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRODUTOS 200
#define CLIENTES 50

int random(int n)
{
    return rand() % n;
}

int main(int args , char * arg[])
{
    int i, j, p, npro, ncli;
    int compra[CLIENTES];
    float preco[PRODUTOS];
    float total;

//GERADOR DE NUMEROS ALEATORIOS
    srand((unsigned)time(NULL));

//PREÇO DOS PRODUTOS E NUMERO DOS CLIENTES
    npro = random(PRODUTOS) + 1;
    for (i = 0; i < npro; i++)
    {
        p = 5 + random(96);
        preco[i] = p;
    }
    ncli = random(CLIENTES) + 1;
    total = 0.0;
    for (i = 0; i < ncli; i++)
    {
        compra[i] = random(npro);

        total += preco[compra[i]];
    }
        //MENU BASE DO PROGRAMA
    printf("==========================================\n");
    printf("            SIMULADOR DE VENDAS       \n");
    printf("==========================================\n");
    printf(" NUMERO DE PRODUTOS: %d\n", npro);
    printf(" NUMERO DE CLIENTES: %d\n", ncli);
    printf("------------------------------------------\n");
    printf(" CLIENTE          PRODUTO        VALOR(R$)\n");
    printf("------------------------------------------\n");
    for (i = 0; i < ncli; i++)
    {
        //USANDO OS NUMEROS NA FRENTE DO % PRA CENTRALIZAR AS POSIÇOES DOS VALORES
        printf("%5d %17d %18.2f\n", i , compra[i] + 1, preco[compra[i]]);
    }
    printf("\n------------------------------------------\n");
    printf(" FATURAMENTO TOTAL DO DIA: R$ %.2f\n", total);
    printf("==========================================\n");

    return 0;
}
