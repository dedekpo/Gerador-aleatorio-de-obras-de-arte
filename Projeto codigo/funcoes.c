#include "funcoes.h"
#include <time.h>

void imprimeQuadro(char quadro[20][80]){
    for (int i=0;i<20;i++){
        for(int j=0;j<80; j++)
            printf("%c", quadro[i][j]);
        printf("\n");
    }

}

void criaQuadro(char quadro[20][80]){
    int i,j;
    for (i=0;i<20;i++){
            for(j=0;j<80;j++){
                if (j == 0 || j == 79)
                    quadro[i][j] = '|';
                if (i == 0 || i == 19)
                    quadro[i][j] = '-';
                if (i != 0 && i!=19 && j!= 0 && j!= 79)
                    quadro [i][j] = ' ';
            }
    }

}

void fazFigura1(char quadro[20][80], int quantidade){
    while (quantidade > 0){
        int posicaoRand1 = rand()%20;
        int posicaoRand2 = rand()%80;
        if (quadro[posicaoRand1][posicaoRand2] == ' '){
            quadro[posicaoRand1][posicaoRand2] = '*';
            quantidade--;
        }
    }
}

void fazFigura2(char quadro[20][80], int quantidade){
    while (quantidade > 0){
        int posicaoRand1 = rand()%20;
        int posicaoRand2 = rand()%80;
        if (quadro[posicaoRand1][posicaoRand2] == ' ' && quadro[posicaoRand1-1][posicaoRand2] == ' ' &&
            quadro[posicaoRand1+1][posicaoRand2] == ' ' && quadro[posicaoRand1][posicaoRand2-1] == ' ' &&
            quadro[posicaoRand1][posicaoRand2+1] == ' '){

            quadro[posicaoRand1][posicaoRand2] = '*';
            quadro[posicaoRand1-1][posicaoRand2] = '*';
            quadro[posicaoRand1+1][posicaoRand2] = '*';
            quadro[posicaoRand1][posicaoRand2-1] = '*';
            quadro[posicaoRand1][posicaoRand2+1] = '*';
            quantidade--;
        }
    }
}

void fazFigura3(char quadro[20][80], int quantidade){
    while (quantidade > 0){
        int posicaoRand1 = rand()%20;
        int posicaoRand2 = rand()%80;
        if (quadro[posicaoRand1][posicaoRand2] == ' ' && quadro[posicaoRand1-1][posicaoRand2-1] == ' ' && quadro[posicaoRand1+1][posicaoRand2-1] == ' ' && quadro[posicaoRand1-1][posicaoRand2+1] == ' ' && quadro[posicaoRand1+1][posicaoRand2+1] == ' '){
            quadro[posicaoRand1][posicaoRand2] = '*';
            quadro[posicaoRand1-1][posicaoRand2-1] = '*';
            quadro[posicaoRand1+1][posicaoRand2-1] = '*';
            quadro[posicaoRand1-1][posicaoRand2+1] = '*';
            quadro[posicaoRand1+1][posicaoRand2+1] = '*';
            quantidade--;
        }
    }
}

void fazRandom(char quadro[20][80], int quantidade){
    int figura;
    while (quantidade > 0){
        figura = rand() % 3;
        switch(figura){
            case 0:
                fazFigura1(quadro, 1);
            break;
            case 1:
                fazFigura2(quadro, 1);
            break;
            case 2:
                fazFigura3(quadro, 1);
            break;
        }
        quantidade--;
    }

}

void fazEspecial(char quadro[20][80], int quantidade){
    int figura;
    while (quantidade > 0){
        figura = rand() % 3;
        int posicaoRand1 = rand()%20;
        int posicaoRand2 = rand()%80;
        switch(figura){
            case 0:
                if(quadro[posicaoRand1][posicaoRand2] == ' ' && quadro[posicaoRand1][posicaoRand2-3] == ' ' && quadro[posicaoRand1][posicaoRand2-2] == ' ' && quadro[posicaoRand1][posicaoRand2-1] == ' ' && quadro[posicaoRand1][posicaoRand2 +3] == ' ' && quadro[posicaoRand1][posicaoRand2+2] == ' ' && quadro[posicaoRand1][posicaoRand2+1] == ' '){
                    quadro[posicaoRand1][posicaoRand2] = '_';
                    quadro[posicaoRand1][posicaoRand2+1] = '^';
                    quadro[posicaoRand1][posicaoRand2+2] = ')';
                    quadro[posicaoRand1][posicaoRand2-1] = '^';
                    quadro[posicaoRand1][posicaoRand2-2] = '(';
                    quadro[posicaoRand1][posicaoRand2-3] = '|';
                    quadro[posicaoRand1][posicaoRand2+3] = '|';
                    quantidade--;
                }
            break;
            case 1:
                if(quadro[posicaoRand1][posicaoRand2] == ' ' && quadro[posicaoRand1][posicaoRand2-3] == ' ' && quadro[posicaoRand1][posicaoRand2-2] == ' ' && quadro[posicaoRand1][posicaoRand2-1] == ' ' && quadro[posicaoRand1][posicaoRand2 +3] == ' ' && quadro[posicaoRand1][posicaoRand2+2] == ' ' && quadro[posicaoRand1][posicaoRand2+1] == ' '){
                    quadro[posicaoRand1][posicaoRand2] = '_';
                    quadro[posicaoRand1][posicaoRand2+1] = '0';
                    quadro[posicaoRand1][posicaoRand2+2] = ')';
                    quadro[posicaoRand1][posicaoRand2-1] = '0';
                    quadro[posicaoRand1][posicaoRand2-2] = '(';
                    quadro[posicaoRand1][posicaoRand2-3] = '/';
                    quadro[posicaoRand1][posicaoRand2+3] = '/';
                    quantidade--;
                }
            break;
            case 2:
                    if(quadro[posicaoRand1][posicaoRand2] == ' ' && quadro[posicaoRand1][posicaoRand2-3] == ' ' && quadro[posicaoRand1][posicaoRand2-2] == ' ' && quadro[posicaoRand1][posicaoRand2-1] == ' ' && quadro[posicaoRand1][posicaoRand2 +3] == ' ' && quadro[posicaoRand1][posicaoRand2+2] == ' ' && quadro[posicaoRand1][posicaoRand2+1] == ' '){
                    quadro[posicaoRand1][posicaoRand2] = '.';
                    quadro[posicaoRand1][posicaoRand2+1] = '<';
                    quadro[posicaoRand1][posicaoRand2+2] = ')';
                    quadro[posicaoRand1][posicaoRand2-1] = '>';
                    quadro[posicaoRand1][posicaoRand2-2] = '(';
                    quadro[posicaoRand1][posicaoRand2-3] = '|';
                    quadro[posicaoRand1][posicaoRand2+3] = '/';
                    quantidade--;
                }
            break;
        }
    }

}

void refazQuadro(char quadro[20][80], int quantidade, int opcao){
    char refazer;
    printf("Deseja refazer o quadro? Y/N\n");
    fflush(stdin);
    scanf("%c", &refazer);
    if (refazer == 'Y' || refazer == 'y'){
        switch(opcao){
            case 1:
            criaQuadro(quadro);
            fazFigura1(quadro, quantidade);
            imprimeQuadro(quadro);
        break;
        case 2:
            criaQuadro(quadro);
            fazFigura2(quadro, quantidade);
            imprimeQuadro(quadro);
        break;
        case 3:
            criaQuadro(quadro);
            fazFigura3(quadro, quantidade);
            imprimeQuadro(quadro);
        break;
        case 4:
            criaQuadro(quadro);
            fazRandom(quadro, quantidade);
            imprimeQuadro(quadro);
        break;
        case 5:
            criaQuadro(quadro);
            fazEspecial(quadro, quantidade);
            imprimeQuadro(quadro);
        break;
        }
        refazQuadro(quadro, quantidade ,opcao);
    } else if (refazer == 'N' || refazer == 'n'){
        return;
    } else {
        printf("Opcao invalida\n");
        refazQuadro(quadro, quantidade, opcao);
    }
}
