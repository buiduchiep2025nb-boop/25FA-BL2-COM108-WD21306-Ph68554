#include <stdio.h>

void thongTinMonHoc() {
    char tenMon[50];
    int maMon;
    int soTinChi;
    int hocPhi;


    printf("Nhap ten mon hoc: ");
    scanf(" %s", tenMon);   // nhap ca dong

    printf("Nhap ma mon: ");
    scanf("%d", &maMon);

    printf("Nhap so tin chi: ");
    scanf("%d", &soTinChi);
    hocPhi = soTinChi * 500000;
    // in ra
    printf("\n--- THONG TIN MON HOC ---\n");
    printf("Ten mon hoc: %s\n", tenMon);
    printf("Ma mon: %d\n", maMon);
    printf("So tin chi: %d\n", soTinChi);
    printf("Hoc phi cua mon la : %d", hocPhi);
}


void tinhTongSoLe() {
    int n, i, x, tong = 0;

    printf("Nhap so luong so nguyen: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &x);
        if (x % 2 != 0) {
            tong += x;
        }
    }

    printf("Tong cac so le = %d\n", tong);
}

int main() {
    int chon;

    do {
        printf("\n------ MENU ------\n");
        printf("1. Thong tin mon hoc\n");
        printf("2. Tinh tong so le\n");
        printf("3. Thong tin diem lab (chua lam)\n");
        printf("0. Thoat\n");
        printf("Moi chon chuc nang [0-3]: ");

        scanf("%d", &chon);
        getchar(); // clear bo nho dem

        switch (chon) {
        case 1:
            thongTinMonHoc();
            break;
        case 2:
            tinhTongSoLe();
            break;
        case 0:
            printf("Thoat chuong trinh!\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (chon != 0);

    return 0;