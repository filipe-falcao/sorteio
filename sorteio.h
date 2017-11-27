#ifndef sorteio_h
#define sorteio_h


typedef struct array{
	int size;
	int jogadores[10];
} *Array;

Array newArray();
int add(Array a, int i);
void printEquipas(int a[]);
void printArray(int a[]);
void printChave(int c[], int e[]);
void printListaJogadores();

#endif
