#include <stdio.h>

int main(){
    float chieuDai, chieuRong; 
    printf("Nhap vao chieu dai: ");
    scanf("%f", &chieuDai);
    printf("Nhap vao chieu rong");
    scanf("%f", &chieuRong);
    float dienTich = chieuDai * chieuRong;
    printf("HCN co chieu dai: %f, co chieu rong:%f, dien tich =%f", chieuDai, chieuRong, dienTich);
    float chuVi = (chieuDai + chieuRong)*2; 
    printf("HCN co chieu dai: %f, co chieu rong:%f, chu vi =%f", chieuDai, chieuRong, chuVi);
    return 0;
}
