#include <stdio.h>

Inicio
tipo X = vetor [1..10] de inteiros;
Inteiro: i, j, aux;
Para 1 at� 10 passo 1 fa�a
            Leia X[i];
Fimpara;
Para i at� 10 passo 1 fa�a
            Para j at� 9 passo 1 fa�a
Se (X[j] < X[I]) ent�o
             aux <- X[j];
             X[j] <- X[j + 1];
             X[j + 1] <- aux;
Fimse;
Fimpara;
Fimpara;
Para i at� 10 passo 1 fa�a
Escreva (x[i]);
Fimpara;
Fimalgoritmo.
