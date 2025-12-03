
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

        default:

            printf("Chon lai tu [1-3]");

        }
        printf("Tiep tuc chuc nang nay khong ?  [1=Co  |  0=Khong]");
        scanf("%d", tiepTuc);
        system("cls"); // clear screen
    }
}
void kiemTraSoNguyen() {}
void uocChungVaBoiChung() {}
void tinhTien() {}
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
int maint ()
{

    demoMang2Chieu();
   
}
