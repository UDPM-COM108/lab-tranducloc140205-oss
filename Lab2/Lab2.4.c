
#include <stdio.h>
int main(){
    //BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    int x, y, tong, hieu; 
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &x,&y);
    printf("Xuat 2 so nguyen: %d %d", x, y);
    tong = x + y;
    hieu = x - y; 
    printf("\nTong 2 so nguyen :%d", tong);
    printf("\nHieu 2 so nguyen :%d", hieu);
    //BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    int chieuDai, chieuRong,dienTich,chuVi;
    printf("Nhap vao chieu dai: ");
    scanf("%d", &chieuDai);
    printf("Nhap vao chieu rong");
    scanf("%d", &chieuRong);
    dienTich = chieuDai * chieuRong;
    printf("HCN co chieu dai: %d, co chieu rong:%d, dien tich =%d", chieuDai, chieuRong, dienTich);
    chuVi = (chieuDai + chieuRong)*2; 
    printf("HCN co chieu dai: %d, co chieu rong:%d, chu vi =%d", chieuDai, chieuRong, chuVi);
    //Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    int banKinh,chu_Vi, dien_Tich; 
    printf("Nhap vap tu ban phim ban kinh: ");
    scanf("%d", &banKinh);
    #define Pi =3.14; 
    dien_Tich =(banKinh*banKinh)*3.14;
    printf("Hinh tron co ban kinh:%d, co dien tich =%d", banKinh, dien_Tich);
    chu_Vi = (banKinh*2)*3.14;
    printf("Hinh tron co ban kinh: %d, co chu vi: %d", banKinh, chu_Vi);
    //Bài 4: Xây dựng chương trình tính điểm trung bình 
    int toan, ly, hoa, diemTrungBinh;
    printf("Nhap vao tu ban phim diem mon Toan: ");
    printf("Nhap vao tu ban phim diem mon Ly; ");
    printf("Nhap vao tu ban phim diem mon Hoa: ");
    scanf("%d %d %d", &toan, &ly, &hoa);
    diemTrungBinh= (toan*3 + ly*2 + hoa)/3;
    printf("diem trung binh la: %d", diemTrungBinh);
    //Bài 5: Xây dựng chương trình tính diện tích tam giác vuông
    double a, b, c, cv, dt;
    printf("Nhap so do canh day: ");
    scanf("%lf", &a);
    printf("Nhap so do canh ben: ");
    scanf("%lf", &b);
    printf("Nhap so do canh goc vuong: ");
    scanf("%lf", &c);
    cv = a + b + b;
    dt = 0.5*b*c; 
    printf("Hinh tam giac co chu vi la: %f, có dien tich la: %f",cv,dt);
    return 0;
}

