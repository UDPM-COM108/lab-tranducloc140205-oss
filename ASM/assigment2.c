#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int luaChon; 
do{
printf("1.Chuc nang kiem tra so nguyen\n"); 
printf("2.Chuc nang tim uoc so chung va boi so chung cua 2 so\n");
printf("3.Chuc nang chuong trinh tinh tien cho quan karaoke\n");
printf("4.Chuc nang tinh tien dien\n");
printf("5.Chuc nang doi tien\n");
printf("6.Chuc nang xay dung chuc nang tinh la xuat vay ngan hang vay tra gop\n");
printf("7.Chuc nang xay dung chuong trinh vay tien mua xe\n");
printf("8.Chuc nang sap xep thong tin sinh vien\n");
printf("9.Chuc nang xay dung game FPOLY-LOTT(2/15) \n");
printf("10. Chuc nang xay dung chuong trinh tinh toan phan so\n");
printf("0. Thoat chuong trinh\n");

printf("Nhap lua chon cua ban: ");
scanf("%d", &luaChon);
switch(luaChon){
    case 1: {
        int x;//nhap tu ban phim 

        printf("Nhap vao 1 so nguyen x tu ban phim: ");
        scanf("%d", &x);
    //1. kiem tra x co phai so nguyen
        int count =0;
        if((int)x ==x){
            printf("X la so nguyen");
        }else {
            printf("X khong phai la so nguyen");

        }
     //2. kiem tra x co phai so chinh phuong 
     count = 0;
        int i;
        for(i=1;i*i<=x;i++){
            if(i*i ==x){
                count =1;
                break;
            }
        }
        if(count==1){
            printf("X la so chinh phuong");
        }else {
            printf("X khong phai la so chinh phuong");
        }
        
    //3. kiem tra x co phai so nguyen to 
    count =0;
        for(i=2;i<x; i++){
            if(x%i==0){
                count=1;
                break;
            }
        }
        if(count==0){
        printf("X la so nguyen to");
        }else {
            printf(" X khong phai la so nguyen to");
        }
        break;
    }
    case 2: {
        int X,Y;
        printf(" Nhap vao 2 so nguyen (x,y) tu ban phim: ");
        scanf("%d %d", &X, &Y);
        // Tim UCLN 
        int a = X, b = Y; 
        while (a!=b){
            if(a>b){
                a-=b;
            }else {
                b-=a;
            }
        }
        int ucln = a;// hoặc b (khi a ==b)
        //Tinh BCNN
        int bcnn = (X+Y)/ ucln;
        //In ket qua
        printf("Uoc so chung lon nhat cua %d va %d la : %d\n", X, Y, ucln);
        printf("Boi so chung lon nhat cua %d va %d la : %d\n", X, Y, bcnn);
        break;

    }
    case 3: {
        int gioBatDau, gioKetThuc; 
        printf("Nhap gio bat dau(12->23): ");
        scanf("%d", &gioBatDau);
        printf("Nhap gio ket thuc(12->23): ");
        scanf("%d", &gioKetThuc);
        if(gioBatDau <12|| gioBatDau >23 || gioKetThuc >23 || gioKetThuc<= gioBatDau){
            printf(" Gio khong hop le \n");
        }else{ 
            int gio = gioKetThuc - gioBatDau;
            int gia3gio= 150000;
            float tongTien; 
        if(gio<=3){
            tongTien= gio * gia3gio;
        }
        if( gio >3){
            tongTien = gio *(gia3gio * 0.7);
        }else if (gio
      >=14 && gio <= 17){
            tongTien = gio *(gia3gio *0.6);
        }
    

        printf("Hien thi gia tien can thanh toan: %.0f VND\n", tongTien);
    }
        break; 


    }
    case 4: { 
        int kWh; 
        float money =0; 
        printf("Nhap vao so (kWh) điện sử dụng: \n");
        scanf("%d", &kWh);
        if(kWh<=50){
            money= kWh*1.678; 
        }else if(kWh<=100){
            money =kWh*1.678 + (kWh-50)*1.734;
        }else if(kWh<=200){
            money= kWh*1.678 + kWh*1.734 + (kWh-100)*2.014;
        }else if(kWh<=300){
            money= kWh*1.678 +kWh*1.734 + kWh*2.014 + (kWh-200)*2.536;
        }else if(kWh<=400){
            money= kWh*1.678 +kWh*1.734 + kWh*2.014 + kWh*2.536 + (kWh-300)*2.834;
        }else {
            money= kWh*1.678 +kWh*1.734 + kWh*2.014 + kWh*2.536 + kWh*2.834 + (kWh-400)*2.927;
           
        }
        printf("Hien thi ra so tien can phai tra: %f", money);
         break;
    }

    
    case 0: 
      printf("Thoat chuong trinh\n");
      exit(0);
      break;
    
    default:
      printf("Lua chon khong dung, moi nhap lai\n");
}
}while( luaChon!= 0);
    return 0;

}
