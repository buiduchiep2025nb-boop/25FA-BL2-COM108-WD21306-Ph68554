

#include <stdio.h>
#include<math.h>
void lapChucNang(int chonChucNang)


{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:kiemTraSoNguyen;
            break;
        case 2:uocChungVaBoiChung;
            break;
        case 3:tinhTien;
            break;
        case 4:demoMang2Chieu;
            break;
        default:
            
                printf("Chon lai tu [1-4]");
            
        }
        printf("Tiep tuc chuc nang nay khong ?  [1=Co  |  0=Khong]");
        scanf("%d", tiepTuc);
        system("cls"); // clear screen
    }
}
void kiemTraSoNguyen(){}
void uocChungVaBoiChung(){}
void tinhTien(){}
void demoMang2Chieu() 
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang[%d][%d]=", i, j);
            scanf("%d", &array[i][j]);

        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d, ", array[i][j]);
            }
            printf("\n");

        }
    }
}
void demoString()
{
    char name[10] = { 'A','n','h' };//"Anh"
    //get(name);>fgets();
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c", &name[i]);
    }
    // xuat du lieu = for+printf
    for (int i = 0; i < 3; i++)
    {
        printf("%c", name[i]);
    }
    puts(name);
}
int main()

{
    int chonChucNang;


    do
    {
        printf("menu\n");
        printf("1. Kiem Tra so nguyen \n");
        printf("2. mang 2 chieu\n");
        printf("3.String \n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");

        scanf_s("%d", &chonChucNang);
        lapChucNang(chonChucNang);

    } while (chonChucNang != 0);
} 

