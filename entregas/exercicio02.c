#include <stdio.h>
#include <math.h>

/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1=(x1,y1) e p2=(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula da distância entre os pontos.

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
*/

int main() {

    float x1, y1;
    scanf("%f %f", &x1, &y1);

    float x2, y2;
    scanf("%f %f", &x2, &y2);
    
    printf("%.4f\n", (sqrt(pow((x2-x1),2)+pow((y2-y1),2))) );
    
    return 0;
}