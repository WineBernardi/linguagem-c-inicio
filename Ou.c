#include <stdio.h>

int main(){ 
	
	int dado = 10;
	
	printf("Digite 1 ou 2: \n");
	scanf("%d", &dado);

	
	if(dado == 1 || dado == 2){
		printf("Valor correto.\n");
	}
	
}
