#include <stdio.h>

struct produto{
	int cod;
	float valor;
};

int main(){
	
	struct produto p;
	
	printf("Insira o codigo do produto:\n");
	scanf("%d", &p.cod);
	
	printf("Insira o valor do produto em reais:\n");
	scanf("%f", &p.valor);
	
	printf("Os dados sao:\n");
	printf("Codigo: %d\n", p.cod);
	printf("valor: %.2f\n", p.valor);
}
