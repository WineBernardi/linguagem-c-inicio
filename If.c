#include <stdio.h>

int main(){ 
	
	int dado = 10;
	
	printf("Digite um valor entre 1 e 10: \n");
	scanf("%d", &dado);

	
	if(dado >= 1 && dado <= 10){
		printf("Valor correto.\n");
	}
	
}
