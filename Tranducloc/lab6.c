#include <stdio.h>

int main(){
    //Bai 1:Tinh trung binh tong cac so chia het cho 3 trong mang
    int i , n; 
    int a[n];
    int sum =0;
    int count =0;
    float average;
    printf("Moi ban nhap vao tu ban phim cac so nguyen gom n phan tu: ");
    scanf("%d", &n);
    //nhap mang
    printf("Nhap %d so nguyen :\n",n);
    for(i=0; i<n;i++){
       scanf("%d", &a[i]);
    }
    //TInh tong va dem cac so chia het cho 3
    for(i=0;i<n;i++){
        if(a[i]%3==0){
            sum +=a[i];
            count++;
        }
    }
    //Tinh trung binh
    if(count>0){
        average = sum/count;
        printf("Gia tri trung binh cac so chia het cho 3 la: %.2f \n",average);
    }else{
        printf("Khong co phan tu nao chia het cho 3 trong mang \n");
}
    
    //Bai 2: tim GTLN vs GTNN trong mang
    int p, m;
    int k[m]; 
    int max =0;
    int min =0;
    printf("Moi ban nhap so phan tu: ");
    scanf("%d", &m);
    //nhap mang 
    printf("Nhap %d so nguyen: \n",m);
    for(p=0;p<m;p++){
        scanf("%d", &k[p]);
    }
    //Gia tri lon nhat, nho nhat
    max =k[0];
    min =k[0];
    for(p=0;p<m;i++){
       if(k[p]>max){
        max= k[p];
       }else if(k[p]<min){
        min = k[p];
       }
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
    //Bai 3: Sap xep mang theo thu tu giam dan
    int o,j,b, temp;
    int h[100];
    printf("Nhap vao so phan tu: ");
    scanf("%d", &b); 
    //Nhap mang
    printf("Nhap %d so nguyen: \n", b);
    for(o=0;o<b;o++){
       scanf("%d", &h[o]);
    }
    //sap xep theo thu tu giam dan 
    for(o=0; o<b-1;o++){
        for(j=i+1;j<b;j++){
            if(h[o]>h[j]){
                temp=h[o];
                h[o]=h[j];
                h[j]=temp;
            }
        }
    }
    //Xuat mang
    printf("Xuat mang b: ");
    for(o=0;o<b;o++){
        printf("%d ", h[o]);
    }
    return 0;
}