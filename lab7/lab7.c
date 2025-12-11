#include <stdio.h>
#include <string.h>
/*int main(){
    char s[100];
    
    printf("Xin moi nhap vao chuoi: ");
    scanf("%s", s);
    int i=0;
    int n=0;
    int p=0;
    while (s[i++]!='\0'){
        if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='u' || s[i]=='o'){
            n++;
        }else {
            p++;
        }
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am", s,n,p);
    return 0;
}
    */
   int main(){
    char user[100], pass[100];
    char user_dung[100]= "ducloc", pass_dung[100]= "ducloc1402";
    printf("Moi ban nhap username: ");
    scanf("%s", user);
    printf("Moi ban nhap password: ");
    scanf("%s", pass);
    if (strcmp(user, user_dung) == 0 && strcmp(pass, pass_dung) == 0)
    {
        printf("Ban da nhap dung!\n");
    }else{
        printf("Ban da nhap sai!\n");
    }
    return 0;
}