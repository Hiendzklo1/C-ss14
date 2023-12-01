#include <stdio.h>
#include <string.h>
// H�m t�nh do d�i cua chuoi
int tinhDoDaiChuoi(const char *chuoi) {
    const char *temp = chuoi;
    while (*temp != '\0') {
        temp++;
    }
    return temp - chuoi;
}
int main() {
    char chuoi1[100], chuoi2[100];
    // Nhap chuoi thu nhat
    printf("Nhap chuoi thu nhat: ");
    gets(chuoi1);
    // Nhap chuoi thu hai
    printf("Nhap chuoi thu hai: ");
    gets(chuoi2);
    // T�nh do d�i cua tong chuoi
    int doDaiChuoi1 = tinhDoDaiChuoi(chuoi1);
    int doDaiChuoi2 = tinhDoDaiChuoi(chuoi2);
    // In ra do d�i cua tong chuoi
    printf("Do dai cua chuoi thu nhat: %d\n", doDaiChuoi1);
    printf("Do dai cua chuoi thu hai: %d\n", doDaiChuoi2);
    // So s�nh v� in ra chuoi c� do d�i lon hon
    if (doDaiChuoi1 > doDaiChuoi2) {
        printf("Chuoi thu nhat co do dai lon hon.\n");
    } else if (doDaiChuoi1 < doDaiChuoi2) {
        printf("Chuoi thu hai co do dai lon hon.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
    return 0;
}

