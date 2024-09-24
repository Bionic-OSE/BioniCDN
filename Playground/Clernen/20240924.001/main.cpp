// This code is from someone else, not from the class I was in

#include <stdio.h>
#include <string.h>

typedef struct SinhVien {
    char MSSV[9];
    char HoTen[30];
    float DTB;
} SinhVien;

void NhapTTSV(SinhVien &SV) {
    printf("Nhap thong tin sinh vien:\n");
    printf("Nhap MSSV: ");
    fflush(stdin);
    fgets(SV.MSSV, sizeof(SV.MSSV), stdin);
    printf("Nhap HoTen: ");
    fgets(SV.HoTen, sizeof(SV.HoTen), stdin);
    printf("Nhap DTB: ");
    scanf("%f", &SV.DTB);
}

void XuatTTSV(SinhVien &SV) {
    printf("\nMSSV vua nhap la: %s", SV.MSSV);
    printf("HoTen vua nhap la: %s", SV.HoTen);
    printf("DTB: %.2f\n", SV.DTB);
}

void TimTTSV(SinhVien &SV) {
    printf("Vui long nhap MSSV: ");
    fflush(stdin);
    fgets(SV.MSSV, sizeof(SV.MSSV), stdin);
    printf("\nMSSV: %s\nHoTen: %s\nDTB: %.2f\n", SV.MSSV, SV.HoTen, SV.DTB);
}

int main() {
    SinhVien sv;
    NhapTTSV(sv);
    XuatTTSV(sv);
    TimTTSV(sv);
    return 0;
}
