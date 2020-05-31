#include "funcoes.h"

int main()
{
    int i,j, opcao, qtd;
    char quadro[20][80];
    srand((unsigned)time(NULL));
    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n=================================\nEscolha o tipo de figura basica a ser usada para criar a obra:\n1- Asterisco simples\n2- Simbolo de soma com asteriscos\n3- Letra X com asteriscos\n4- Figuras aleatorias\n5- Desenho especial\n");
    scanf("%d" ,&opcao);
    fflush(stdin);
    printf("Digite a quantidade de figuras: \n");
    scanf("%d" ,&qtd);
    if(qtd <= 0)
        qtd = rand()%100 + 1;
    if (qtd > 100)
        qtd = 100;
    switch (opcao){
        case 1:
            criaQuadro(quadro);
            fazFigura1(quadro, qtd);
            imprimeQuadro(quadro);
            refazQuadro(quadro, qtd, opcao);
        break;
        case 2:
            criaQuadro(quadro);
            fazFigura2(quadro, qtd);
            imprimeQuadro(quadro);
            refazQuadro(quadro, qtd, opcao);
        break;
        case 3:
            criaQuadro(quadro);
            fazFigura3(quadro, qtd);
            imprimeQuadro(quadro);
            refazQuadro(quadro, qtd, opcao);
        break;
        case 4:
            criaQuadro(quadro);
            fazRandom(quadro, qtd);
            imprimeQuadro(quadro);
            refazQuadro(quadro, qtd, opcao);
        break;
        case 5:
            criaQuadro(quadro);
            fazEspecial(quadro, qtd);
            imprimeQuadro(quadro);
            refazQuadro(quadro, qtd, opcao);
        break;
        default:
            printf("Opcao invalida!\n");
        break;

    }

    return 0;
}
