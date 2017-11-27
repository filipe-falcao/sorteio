#ifndef sorteio_c
#define sorteio_c

#include <stdio.h>
#include <stdlib.h>
#include "sorteio.h"

char *nomes[]= {"RUI  ","AMÂNDIO","ANTÓNIO","BRUNO","JOÃO","JOSÉ","FILIPE","HELDER","MARCUS","PEDRO"};

Array newArray() {
	Array A = malloc(sizeof(Array));
	A->size=0;
	for(int i=0;i<10;A->jogadores[i++]=-1);
	return A;
}

int add(Array A, int i){
	if(A->jogadores[i]!=1) {
		A->jogadores[i]=1;
		A->size++;
		return A->size;
	}
	else return 0;
}

void printEquipas(int a[]){
  int i,b,p;
	printf("\n\tEQUIPA PRETA\n\n");
	for (i=0,b=1; b<=5 && i < 10 ; i++)
		if(a[i]==1)
			printf(" %d.  %s\n", b++, nomes[i]);
	printf("\n\tEQUIPA BRANCA\n\n");
	for (i=0,p=1; p<=5 && i < 10 ; i++)
		if(a[i]==-1)
			printf(" %d.  %s\n", p++, nomes[i]);
	printf("\n");
}

void printArray(int a[]){
	int i;
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("\t%d",i);
	printf("\n");
	for (i = 0; i < 10; ++i)
		printf("\t%d",a[i]);
	printf("\n");

}

void printChave(int n[], int e[]){
	printf("\n\nChave: ");
	for (int i = 0; i < 5; ++i)
		printf("%d  ",n[i]);
	printf("*  ");
	for (int i = 0; i < 2; ++i)
		printf("%d  ",e[i]);
	printf("\n\n");
}

void printListaJogadores(){
	printf("\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d - %s",i,nomes[i]);
		printf("\t\t");
		printf("%d - %s\n",i+5,nomes[i+5]);
	}
}

#endif
