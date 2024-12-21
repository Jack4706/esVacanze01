#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MIN = 0;
const int MAX = 9;


int main() {
    int numeriCasuali[100];
    int numeroScelto;
    int contaNumero = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        int n = rand() % (MAX - MIN + 1) + MIN;
        numeriCasuali[i] = n;
    }

    printf("Scegli un numero da 0 a 9:\n");
    scanf("%d", &numeroScelto);

    for (int i = 0; i < 100; i++) {
        if (numeriCasuali[i] == numeroScelto) {
            contaNumero++;
        }
    }

    printf("il numero %d e' comparso %d volte",numeroScelto, contaNumero);

    return 0;
}
