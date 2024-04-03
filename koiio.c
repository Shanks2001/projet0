#include <stdio.h>

int somma(float array[], int n) {
    float sommagio = 0;
    for (int i = 0; i < n; i++) {
        sommagio += array[i];
    }
    return sommagio;
}

int sotrazione(float array[], int n) {
    float sotra = array[0];
    for (int i = 1; i < n; i++) {
        sotra -= array[i];
    }
    return sotra;
}

float dividi(float array[], int n) {
    float dive = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] != 0) {
            dive = dive / array[i];
        } else {
            fprintf(stderr, "Non è possibile fare divisione per zero\n");
            return 0;
        }
    }
    return dive;
}

int moltiplicazione(float array[], int n) {
    float multi = array[0];
    for (int i = 1; i < n; i++) {
        multi = multi * array[i];
    }
    return multi;
}

void menu() {
    printf("\n\tMENU\t\n");
    printf("1 somma tutti i numeri\n");
    printf("2 sottrae tutti i numeri\n");
    printf("3 dividi tutti i numeri\n");
    printf("4 moltiplica tutti i numeri\n");
    printf("0 esci\n");
}

int main() {
    int n = 0;
    int scelta = 0;
    float risultato = 0;

    do {
        printf("Quanti valori vuoi usare per l'operazione:");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    float array[n];
    for (int i = 0; i < n; i++) {
        printf("Scrivi il %d valore:", i + 1);
        scanf("%f", &array[i]);
    }

    do {
        menu();
        printf("Cosa vuoi fare:");
        scanf("%d", &scelta);
        switch (scelta) {
            case 1:
                risultato = somma(array, n);
                printf("Questo è il risultato: %.2f\n", risultato);
                break;
            case 2:
                risultato = sotrazione(array, n);
                printf("Questo è il risultato: %.2f\n", risultato);
                break;
            case 3:
                risultato = dividi(array, n);
                printf("Questo è il risultato: %.2f\n", risultato);
                break;
            case 4:
                risultato = moltiplicazione(array, n);
                printf("Questo è il risultato: %.2f\n", risultato);
                break;
            default:
                if (scelta != 0) {
                    printf("Non fa niente\n");
                }
        }
    } while (scelta != 0);
    printf("ciao");

    return 0;
}