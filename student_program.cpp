#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[]) ;

int main() {
    char text[50] = "I Love You" ;
    char out[50] ;
    reverse(text, out) ;
    printf("%s\n", out) ; // แสดงผลข้อความที่กลับแล้ว
    return 0 ;
} //end function

void reverse(char str1[], char str2[]) {
    int len = strlen(str1) ; // หาความยาวของข้อความใน str1
    for (int i = 0 ; i < len ; i++) {
        str2[i] = str1[len - i - 1] ; // ก๊อบปี้ตัวอักษรจากท้ายมาที่ต้น
    }
        str2[len] = '\0'; // เติม null terminator เพื่อจบสตริง
    
    
}//end void
