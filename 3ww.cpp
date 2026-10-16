#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void themCauThu(void) {
    printf("Chua trien khai\n");
}

void hienThiDanhSach(void) {
    printf("Chua trien khai\n");
}

void timKiemCauThu(void) {
    printf("Chua trien khai\n");
}

/* ===== Menu ===== */
int main(void) {
#ifdef _WIN32
    SetConsoleOutputCP(65001); /* hien thi tieng viet trên Windows */
#endif
    int chon;
    do {
        printf("\n===== QUAN LY CAU THU =====\n");
        printf("1. Them cau thu\n");
        printf("2. Hien thi danh sach\n");
        printf("3. Tim kiem cau thu\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        if (scanf("%d", &chon) != 1) {
            while (getchar() != '\n');  /* bo ky tu nhap sai */
            chon = -1;
        }
        switch (chon) {
            case 1: themCauThu();      break;
            case 2: hienThiDanhSach(); break;
            case 3: timKiemCauThu();   break;
            case 0: printf("Tam biet!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (chon != 0);
    return 0;
}
