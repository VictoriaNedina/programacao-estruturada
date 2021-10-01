#include <stdio.h>

/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

int main() {
    
    int horas, minutos, segundos;
    
    scanf("%i", &segundos);
    
    horas = segundos / 3600;
    segundos = segundos - horas * 3600;
    minutos = segundos / 60;
    segundos = segundos - minutos * 60;
    
    printf("%i:%i:%i\n", horas, minutos, segundos);
    
    return 0;
}