#include <stdio.h>
#include <string.h>
char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
        printf("Enter str1 : ");
    fgets(text, sizeof(text), stdin);
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
     return 0;
}//end function

char* reverse(char str1[]) {
    int len = strlen(str1); 
    int i;
    char temp;
    
    for (i = 0; i < len / 2; i++) {
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }

    printf("FUNC : %s\n", str1);

    return str1;
}
