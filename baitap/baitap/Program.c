#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Hàm kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Hàm kiểm tra số chính phương
int laSoChinhPhuong(int n) {
    int sq = (int)sqrt(n);
    return sq * sq == n;
}

// Hàm tìm UCLN
int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm tìm BCNN
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

// Hàm tính tiền karaoke
void tinhTienKaraoke() {
    int gioBD, gioKT;
    printf("Nhap gio bat dau: "); scanf("%d", &gioBD);
    printf("Nhap gio ket thuc: "); scanf("%d", &gioKT);
    if (gioBD < 12 || gioKT > 23 || gioBD >= gioKT) {
        printf("Gio khong hop le!\n");
        return;
    }
    int gio = gioKT - gioBD;
    double tien = 0;
    if (gio <= 3) tien = gio * 150000;
    else tien = 3 * 150000 + (gio - 3) * 150000 * 0.7;
    if (gioBD >= 14 && gioBD <= 17) tien *= 0.9;
    printf("Tien thanh toan: %.0lf VND\n", tien);
}

// Hàm tính tiền điện
void tinhTienDien() {
    int kwh;
    printf("Nhap so kWh su dung: "); scanf("%d", &kwh);
    double tien = 0;
    if (kwh <= 50) tien = kwh * 1678;
    else if (kwh <= 100) tien = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200) tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    else if (kwh <= 300) tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    else if (kwh <= 400) tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    else tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    printf("Tien dien phai tra: %.0lf VND\n", tien);
}

// Hàm đổi tiền
void doiTien() {
    int tien;
    printf("Nhap so tien can doi: "); scanf("%d", &tien);
    int menhgia[] = { 500,200,100,50,20,10,5,2,1 };
    for (int i = 0; i < 9; i++) {
        if (tien >= menhgia[i]) {
            int soTo = tien / menhgia[i];
            tien %= menhgia[i];
            printf("%d to %d\n", soTo, menhgia[i]);
        }
    }
}


void tinhLaiSuat() {
    double tien;
    printf("Nhap so tien muon vay: "); scanf("%lf", &tien);
    double tong = tien;
    for (int i = 0; i < 12; i++) tong += tong * 0.05;
    printf("Tong tien phai tra sau 12 thang: %.0lf VND\n", tong);
}


void vayMuaXe() {
    double phantram;
    double giaXe = 500000000;
    printf("Nhap so phan tram vay (0-100): "); scanf("%lf", &phantram);
    double tienVay = giaXe * phantram / 100;
    double tienTraTruoc = giaXe - tienVay;
    double thang = 24 * 12;
    double tongLai = tienVay * 0.072 * 24; // 7.2%/nam
    double tienThang = (tienVay + tongLai) / thang;
    printf("Tien tra truoc: %.0lf, Tien tra hang thang: %.0lf VND\n", tienTraTruoc, tienThang);
}


void sapXepSinhVien() {
    int n;
    printf("Nhap so sinh vien: "); scanf("%d", &n);
    char ten[50][50];
    float diem[50];
    for (int i = 0; i < n; i++) {
        printf("Nhap ho ten sinh vien %d: ", i + 1); scanf(" %[^\n]", ten[i]);
        printf("Nhap diem: "); scanf("%f", &diem[i]);
    }
    // Sap xep giam dan
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diem[i] < diem[j]) {
                float tmp = diem[i]; diem[i] = diem[j]; diem[j] = tmp;
                char tmpName[50]; strcpy(tmpName, ten[i]); strcpy(ten[i], ten[j]); strcpy(ten[j], tmpName);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        char hocLuc[20];
        if (diem[i] >= 9) strcpy(hocLuc, "Xuat sac");
        else if (diem[i] >= 8) strcpy(hocLuc, "Gioi");
        else if (diem[i] >= 6.5) strcpy(hocLuc, "Kha");
        else if (diem[i] >= 5) strcpy(hocLuc, "Trung binh");
        else strcpy(hocLuc, "Yeu");
        printf("%s - %.2f - %s\n", ten[i], diem[i], hocLuc);
    }
}


void gameFPolyLott() {
    srand(time(NULL));
    int soHT[2], soRandom[15];
    printf("Nhap 2 so (1-15): ");
    scanf("%d %d", &soHT[0], &soHT[1]);
    for (int i = 0; i < 15; i++) soRandom[i] = i + 1;
    // Tron so ngau nhien
    for (int i = 14; i > 0; i--) {
        int j = rand() % (i + 1);
        int tmp = soRandom[i];
        soRandom[i] = soRandom[j];
        soRandom[j] = tmp;
    }
    int count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 15; j++) {
            if (soHT[i] == soRandom[j]) count++;
        }
    }
    if (count == 0) printf("Chuc may man lan sau\n");
    else if (count == 1) printf("Chuc mung ban trung giai nhi\n");
    else printf("Chuc mung ban trung giai nhat\n");
}


void tinhPhanSo() {
    int a1, b1, a2, b2;
    printf("Nhap phan so 1 (a/b): "); scanf("%d/%d", &a1, &b1);
    printf("Nhap phan so 2 (a/b): "); scanf("%d/%d", &a2, &b2);
    printf("Tong: %d/%d\n", a1 * b2 + a2 * b1, b1 * b2);
    printf("Hieu: %d/%d\n", a1 * b2 - a2 * b1, b1 * b2);
    printf("Tich: %d/%d\n", a1 * a2, b1 * b2);
    printf("Thuong: %d/%d\n", a1 * b2, b1 * a2);
}

// Ham kiem tra so nguyen, nguyen to, chinh phuong
void kiemTraSoNguyen() {
    int x;
    printf("Nhap so x: "); scanf("%d", &x);
    printf("So %d la so nguyen\n", x);
    printf("%d %s la so nguyen to\n", x, laSoNguyenTo(x) ? "co" : "khong");
    printf("%d %s la so chinh phuong\n", x, laSoChinhPhuong(x) ? "co" : "khong");
}

int main() {
    int chon;
    do {
        printf("\n---MENU---\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN va BCNN 2 so\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai suat ngan hang\n");
        printf("7. Vay mua xe\n");
        printf("8. Sap xep sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: "); scanf("%d", &chon);
        switch (chon) {
        case 1: kiemTraSoNguyen(); break;
        case 2: {
            int x, y;
            printf("Nhap 2 so: "); scanf("%d %d", &x, &y);
            printf("UCLN: %d\n", UCLN(x, y));
            printf("BCNN: %d\n", BCNN(x, y));
            break;
        }
        case 3: tinhTienKaraoke(); break;
        case 4: tinhTienDien(); break;
        case 5: doiTien(); break;
        case 6: tinhLaiSuat(); break; 
        case 7: vayMuaXe(); break;
        case 8: sapXepSinhVien(); break;
        case 9: gameFPolyLott(); break;
        case 10: tinhPhanSo(); break;
        case 0: printf("Thoat chuong trinh\n"); break;
        default: printf("Chuc nang khong hop le\n");
        }
    } while (chon != 0);
    return 0;
}
