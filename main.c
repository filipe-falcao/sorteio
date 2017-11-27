#include <stdio.h>
#include <stdlib.h>
#include "sorteio.h"

int numeros[5];
int estrelas[2];

int main(int argc, char **argv) {

	if(argc != 8) {
		printf("Numero de argumentos invalido!\n");
		printf("Do tipo:\n");
		perror("./sorteio 10 20 30 40 50 2 4\n");
		exit(0);
	}

	Array A = newArray();
	int i,j;

	for(i=1; i<=5; i++){
		numeros[i-1] = atoi(argv[i]);
		add(A,numeros[i-1]%10);
	}

	for(i=6, j=0; i<=7 && j<2; i++,j++){
		estrelas[j] = atoi(argv[i]);
		if(A->size<5)
			add(A,estrelas[j]%10);
	}

	for(i=0;i<10 && A->size<5;i++)
		add(A,i);

	printListaJogadores();
	printChave(numeros,estrelas);
	//´printArray(A->jogadores);
	printEquipas(A->jogadores);

	free(A);
}
