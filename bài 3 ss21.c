#include <stdio.h>
#include <string.h>
// Hàm tính do dài cua chuoi
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
    // Tính do dài cua tong chuoi
    int doDaiChuoi1 = tinhDoDaiChuoi(chuoi1);
    int doDaiChuoi2 = tinhDoDaiChuoi(chuoi2);
    // In ra do dài cua tong chuoi
    printf("Do dai cua chuoi thu nhat: %d\n", doDaiChuoi1);
    printf("Do dai cua chuoi thu hai: %d\n", doDaiChuoi2);
    // So sánh và in ra chuoi có do dài lon hon
    if (doDaiChuoi1 > doDaiChuoi2) {
        printf("Chuoi thu nhat co do dai lon hon.\n");
    } else if (doDaiChuoi1 < doDaiChuoi2) {
        printf("Chuoi thu hai co do dai lon hon.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
    return 0;
}

