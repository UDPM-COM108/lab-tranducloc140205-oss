#include <stdio.h>
int main(){
    double banKinh; 
    printf("Nhap vap tu ban phim ban kinh: ");
    scanf("%lf", &banKinh);
    #define Pi =3.14; 
    double dienTich =(banKinh*banKinh)*3.14;
    printf("Hinh tron co ban kinh:%lf, co dien tich =%lf", banKinh, dienTich);
    double chuVi = (banKinh*2)*3.14;
    printf("Hinh tron co ban kinh: %lf, co chu vi: %lf", banKinh, chuVi);
    return 0;
}