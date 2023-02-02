#include <stdio.h>

int main() {
    float arr[10];
    int i, j;
    float temp;

    printf("Digite 10 n�meros reais:\n");

    // L� 10 n�meros reais do usu�rio
    for (i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    // Ordena o array em ordem crescente usando o algoritmo de ordena��o "Bubble Sort"
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array ordenado em ordem crescente:\n");

    // Imprime o array ordenado
    for (i = 0; i < 10; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}


