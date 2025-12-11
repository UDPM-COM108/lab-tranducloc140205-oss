#include <stdio.h>
int main(){
    int x, y, tong, hieu; 
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &x,&y);
    printf("Xuat 2 so nguyen: %d %d", x, y);
    tong = x + y;
    hieu = x - y; 
    printf("\nTong 2 so nguyen :%d", tong);
    printf("\nHieu 2 so nguyen :%d", hieu);
    return 0;
}