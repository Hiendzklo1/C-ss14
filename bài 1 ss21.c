#include <stdio.h>
int main() {
    // Khai báo và khoi tao bien
    int myVariable = 42;
    // Khai báo con tro và gán dia chi cua bien cho con tro 
    int *myPointer = &myVariable;
    // Cách 1: In giá tri và dia chi su dung bien truc tiep
    printf("Cach 1:\n");
    printf("Gia tri cua bien: %d\n", myVariable);
    printf("Dia chi cua bien: %p\n", (void*)&myVariable);

    // Cách 2: In giá tri và dia chi su dung con tro 
    printf("\cach 2:\n"); 
    printf("Gia tri cua bien: %d\n", *myPointer);
    printf("Dia chi cua bien: %p\n", (void*)myPointer);

    return 0;
}

