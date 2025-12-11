#include <stdio.h>

int main(){
    /*
    double diem; 
        printf("Nhap diem cua ban: ");
        scanf("%lf", &diem);
        if(diem>=5){
            printf("Dau!!!!");

        }else
        printf("Rot$$$$");
    //Tinh học luc sinh vien
    double diemSinhVien;
    printf("Nhap diem cua sinh vien");
    scanf("%lf", &diemSinhVien);
    if(diemSinhVien>=0){
        printf("Xuat Sac");
    }else if(diemSinhVien>=8 && diemSinhVien<9){
        printf("Gioi");
    }else if(diemSinhVien>=7 && diemSinhVien<8){
        printf("Kha");
    }else if(diemSinhVien>=5 && diemSinhVien<7){
        printf("Trung binh");
    }else if(diemSinhVien>=3 && diemSinhVien<5){
        printf("Yeu");
    }else {
        printf("Kem");
    }    */
    printf("Viet Nam co bao nhieu dan toc anh em: \n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf(" Xin mơi ban chon dap an (a,n,c,d): ");
    char dapAn; 
    scanf("%s",&dapAn);
    switch(dapAn){
        case 'a': printf("Ban chon sai\n");
        break;
        case 'b': printf("Ban chon sai\n");
        break;
        case 'c': printf("Ban chon dung\n");
        break;
        case 'd': printf("Ban chon sai\n");
        break;
        default: 
               printf("Ban chon khong dung bo dap an (a,b,c,d)");
    }    
   return 0;
}