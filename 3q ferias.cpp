#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float nr[10];
	int i, j;
	
	for(int i=0; i<10; i++){
		
		printf("Digite um número: \n");
		scanf("%f", &nr[i]);
	}
	
	
	for(int j=0; j<10; j++){
		
		if(j%2==0 && j!=0){
			printf("Apenas aqueles com os índices pares:%.2f\n", nr[j]);
		}
	}
	return 0;
}
