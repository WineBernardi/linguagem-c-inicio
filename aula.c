#include <stdio.h>

Inicio
tipo X = vetor [1..10] de inteiros;
Inteiro: i, j, aux;
Para 1 até 10 passo 1 faça
            Leia X[i];
Fimpara;
Para i até 10 passo 1 faça
            Para j até 9 passo 1 faça
Se (X[j] < X[I]) então
             aux <- X[j];
             X[j] <- X[j + 1];
             X[j + 1] <- aux;
Fimse;
Fimpara;
Fimpara;
Para i até 10 passo 1 faça
Escreva (x[i]);
Fimpara;
Fimalgoritmo.
