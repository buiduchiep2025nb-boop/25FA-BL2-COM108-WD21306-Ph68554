

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
void kiemTraSoNguyen(){}
void uocChungVaBoiChung(){}
void tinhTien(){}

       
int main()
{
    
}

