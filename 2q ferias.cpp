#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int ni[10];
    int i;

    printf("Digite 10 números inteiros: \n");
   
    for (i = 0; i < 10; i++) {
        scanf("%d", &ni[i]);
    }

    
    for (i = 0; i < 10; i++) {
        if (ni[i] % 2 == 0) {
            ni[i] = 1;
        } else {
            ni[i] = -1;
        }
    }

    printf("Os números com seus valores mudados: \n");

    
    for (i = 0; i < 10; i++) {
        printf("%d ", ni[i]);
    }

    return 0;
}






