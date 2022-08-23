#include <stdio.h>

int main(){

int aluno;

float soma, idade, media;

soma = 0;

for (aluno=1; aluno <=3; aluno++){

	printf("Escreva o numero do aluno:");
	scanf("%d", &aluno);
	
	printf("Digite a idade do aluno:\n");
	scanf("%f", &idade);
	
	soma = soma + idade;
}

	media = soma/aluno;
	
	printf("media da idade dos alunos: %d\n", media);
}

