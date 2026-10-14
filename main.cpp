#include <stdio.h>
#include <string.h>

/* ===== STRUCT (da chot) ===== */
typedef struct
{
    char maCT[10];      // "CT001" - khoa chinh de tim/sua/xoa
    char hoTen[50];
    char viTri[20];     // "Tien dao", "Tien ve", "Hau ve", "Thu mon"
    int soAo;           // 1 - 99
    int tuoi;           // 16 - 45
    int soBanThang;     // >= 0
    float luongTuan;    // >= 0, don vi: trieu dong/tuan
} CauThu;

/* ===== BIEN TOAN CUC ===== */
CauThu doiBong[100];
int soLuong = 0;

/* ===== Nguoi 1 (Quan - lead) ===== */
void themCauThu() {
    if (soluong >= 100) {
        printf("Danh sach da day\n");
        return;
    }
}

int kiemTraMaTrung(char maCanKiem[])
{
    return 0;
}

/* ===== Long ===== */
// Code cac ham cua minh

/* ===== Minh ===== */
// Code cac ham cua minh

/* ===== HAM MAIN - menu (Quan) ===== */
int main()
{
    printf("Chuong trinh quan ly cau thu - struct da san sang!\n");
    int luaChon = 0;
    do
    {
        printf("1. Them cau thu moi\n");
        printf("2. Hien thi danh sach cau thu\n");
        printf("3. Tim kiem cau thu (theo ma / ten)\n");
        printf("4. Cap nhat thong tin cau thu (theo ma)\n");
        printf("5. Xoa cau thu ( theo ma)\n");
        printf("6. Thong ke (tong ban thang, tong quy luong, luong trung binh, vua pha luoi\n");
        printf("7. Sap xep\n");
        printf("8. Loc cau thu\n");
        printf("0. Thoat\n");
        printf("\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
        case 1:
            themCauThu();
            break;
        case 2:
            hienThiDanhSach();
            break;
        case 3:
            timKiemCauThu();
            break;
        case 4:
            capNhatCauThu();
            break;
        case 5:
            xoaCauThu();
            break;
        case 6:
            thongKe();
            break;
        case 7:
            sapXep();
            break;
        case 8:
            locCauThu();
            break;
        case 0:
            printf("Chao tam biet\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    }
    while (luaChon != 0);
        return 0;
}
