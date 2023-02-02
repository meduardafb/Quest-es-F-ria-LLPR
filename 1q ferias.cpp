#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define p 10

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int i;
    int n[p];

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < p; i++) {
        scanf("%d", &n[i]);
    }
    
    for (i = p - 1; i >= 0; i--) {
    	
        if (n[i] % 2 == 0) {
            printf("Na ordem inversa: %d\n", n[i]);
        }
    }

    return 0;
}
