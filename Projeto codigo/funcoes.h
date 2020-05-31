#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void imprimeQuadro(char quadro[20][80]);
void criaQuadro(char quadro[20][80]);
void fazFigura1(char quadro[20][80], int quantidade);
void fazFigura2(char quadro[20][80], int quantidade);
void fazFigura3(char quadro[20][80], int quantidade);
void fazRandom(char quadro[20][80], int quantidade);
void fazEspecial(char quadro[20][80], int quantidade);
void refazQuadro(char quadro[20][80], int quantidade, int opcao);
