#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

    int luaChon;
    do {
    printf("1.Chuong trinh tinh hoc luc\n");
    printf("2.Chuong trinh tinh bac nhat\n");
    printf("3.Chuong trinh tinh bac 2\n");
    printf("4.Chuong trinh tinh tien dien\n");
    printf("0.Thoat\n");
    
    printf("Moi ban chon chuong trinh: ");
    scanf("%d", &luaChon); 
    switch(luaChon){
     case 1:{

      printf("1.Chuong trinh tinh hoc luc\n");
     double diem; 
    printf("Nhap diem cua ban: ");
    scanf("%lf", &diem);
    if(diem>=9){
        printf("Xuat sac");
    } else if(diem>=8){
        printf("Gioi");
    } else if(diem>=6.5){
        printf("Kha");
    } else if(diem>=5){
        printf("Trung binh");
    } else 
        printf("Yeu");
        break;
     }   
      case 2: {
        printf("2. Chuong trinh tinh bac nhat\n");
      int a ,b ,X;
    printf("nhập vào từ bàn phím giá trị của a, b: ");
    scanf("%d %d", &a, &b);
    if(a==0){
        if(b==0){
            printf("Phuong trinh VSN");
        }else{
            printf(" Phuong trinh vo nghiem ");
        }
        }else{
            X = -b/a;
            printf("Phuong trinh co mot nghiem: %d", X);
            }
            break;
        }
      case 3:{
        printf("3.Chuong trinh tinh bac 2\n");   
      int A, B, C, x, Z, D, D1, D2;
    printf("nhap vao gia tri cua a, b, c la: ");
    scanf("%d %d %d", &A , &B, &C);
    if(A==0){
        printf("phuong trinh thanh bx + c = 0");
    }else{
        Z= (B * B) -(4 * A * C);
        printf("gia tri cua delta la: %d", Z);
    }if(Z<0){
        printf("phuong trinh vo nghiem");
    }else if(Z==0){
        D = -B/(2*A);
        printf("phuong trinh co nghiem kep la: %d", D);
    }else{
        D1 = (-B + sqrt(Z))/(2*A);
        D2 = (-B - sqrt(Z))/(2*A);
        printf("\nphuong trinh co 2 nghiem phan biet");
        printf("\nco nghiem: %d", D1);
        printf("\nco nghiem: %d", D2);
    }    
    break;
}
    case 4:{
         printf("4.Chuong trinh tinh tien dien\n");
    int kWh;
    float money=0;
    printf("Nhap vao so dien tieu thu hang thang");
    scanf("%d", &kWh);
    printf("Hien thi so tien can phai dong");
    if(kWh<=50){
        money = kWh *1.678;
    }else if(kWh<=100){
       money = 50 *1.678 + (kWh-50)*1.734;
    }else if(kWh<=200){
       money = 50* 1.678 + 50 * 1.734 + (kWh-100)*2.014;
    }else if(kWh<=300){
       money = 50* 1.678 + 50 * 1.734 + 50 * 2.014 +(kWh-200)* 2.536;
    }else if(kWh<=400){
       money = 50* 1.678 + 50 * 1.734 + 50 * 2.014 + 50 * 2.536 + (kWh-300)*2.834;
    }else{
       money = 50* 1.678 + 50 * 1.734 + 50 * 2.014 + 50 * 2.536 + 50 * 2.834 +(kWh-400)*2.927; 
    }    
    printf("So tien dien phai dong: %.3f (nghindong)\n",money);
    break;
}
      case 0: 
      printf("Thoat chuong trinh\n");
      exit(0);
      break;
    
      default:
      printf("Lua chon khong dung, moi nhap lai\n");
}
    }while(luaChon !=0);
return 0;
}
