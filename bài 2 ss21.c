#include <stdio.h>
int main() {
    // Khai b�o hai bien so nguy�n
    int a = 5;
    int b = 10;
    // Hien thi gi� tri ban dau
    printf("Truoc khi doi cho: a = %d, b = %d\n", a, b);
    // Khai b�o con tro 
    int *ptr_a, *ptr_b, temp;
    // G�n dia chi cua bien cho con tro 
    ptr_a = &a;
    ptr_b = &b;

    // �oi cho gi� tri cua hai bien su dung con tro 
    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    // Hien thi gi� tri sau khi doi cho 
    printf("Sau khi doi cho: a = %d, b = %d\n", a, b);

    // T�nh hieu truoc v� sau khi doi cho 
    int truoc_doi_cho = a - b;
    printf("Hieu truoc khi doi cho: %d\n", truoc_doi_cho);

    int sau_doi_cho = b - a;
    printf("Hieu sau khi doi cho: %d\n", sau_doi_cho);

    return 0;
}

