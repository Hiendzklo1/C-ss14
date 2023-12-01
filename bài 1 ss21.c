#include <stdio.h>
int main() {
    // Khai b�o v� khoi tao bien
    int myVariable = 42;
    // Khai b�o con tro v� g�n dia chi cua bien cho con tro 
    int *myPointer = &myVariable;
    // C�ch 1: In gi� tri v� dia chi su dung bien truc tiep
    printf("Cach 1:\n");
    printf("Gia tri cua bien: %d\n", myVariable);
    printf("Dia chi cua bien: %p\n", (void*)&myVariable);

    // C�ch 2: In gi� tri v� dia chi su dung con tro 
    printf("\cach 2:\n"); 
    printf("Gia tri cua bien: %d\n", *myPointer);
    printf("Dia chi cua bien: %p\n", (void*)myPointer);

    return 0;
}

