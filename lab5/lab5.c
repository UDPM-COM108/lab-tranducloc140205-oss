#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int min1(int a, int b, int c){
int m =  (a < b) ? a:b;
return (m < c) ? m : c;
}

int max2(int a,  int b, int c){
    int m = ( a > b) ? a : b; 
    return ( m > c) ? m : c;
}

int isLeapYear(int(year)){
    if(year%400 ==0){
        return 1;
    }else if(year%100==0){
        return 0;
    }else if(year%4==0){
        return 1;
    }else {
        return 0;
    }
}
int luaChon;

int main(){
    do{ 
     
        printf("1.Chuong trinh tim gia tri lon nhat, nho nhat trong 3 so\n");
        printf("2.Chuong trinh tinh nam nhuan\n");
        printf("3.Chuong trinh kiem tra cac so trong 1,1000\n");
        printf("0.Thoat\n");

        printf("Moi ban nhap chuong trinh ban muon: ");
        scanf("%d", &luaChon);
switch(luaChon){
    case 1: {
    int a, b, c; 
    printf("Nhap vao gia tri cua so a: ");
    scanf("%d", &a);
    printf("Nhap vao gia tri cua so b: ");
    scanf("%d", &b);
    printf("Nhap vao gia tri cua so c: ");
    scanf("%d", &c);
    int min = min1(a,b,c);
    int max = max2(a,b,c);
    printf("Gia tri nho nhat la: %d\n", min);
    printf("Gia tri lon nhat la: %d\n", max);
    break;
    }
    case 2:{
        int year;
        printf("Nhap vao so nam: ");
        scanf("%d", &year);
        if (isLeapYear(year)){
            printf("La nam nhuan %d\n", year);
        }else {
            printf("Khong phai la nam nhuan\n");
        }
        break;

    }
    case 3:{
        int x;//Nhap tu ban phim
        int i;
        printf("Nhap tu ban phim gia tri so x: ");
        scanf("%d", &x);
       if( x< 1 || x> 1000){
        printf ("So khong nam trong khoang tu [1-1000]\n");
       }else if(x%5 ==0 && x%9==0){
        printf("So chia het cho 5 va chia het cho 9\n");
       }else {
        printf("So khong chia het cho 5 va khong chia het cho 9\n");
       }
        break;
        }

    case 0: 
      printf("Thoat\n");
      exit(0);
      break;
      
      default:
      printf("Lua chon khong dung, moi nhap lai\n");
}
    } while (luaChon !=0);
    return 0; 
}