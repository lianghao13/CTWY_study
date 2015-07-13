/*
 *ÒÀ´ÎÏÔÊ¾×Ö·û´®ÖĞµÄ×Ö·û£¨printf°æ)
*/

#include <stdio.h>

/*---ÏÔÊ¾×Ö·û´®£¨²»»»ĞĞ£©---*/
void put_string(const char str[]) {
    unsigned    i = 0;

    while (str[i]) {
        printf("%c", str[i++]);
    }
}

int main(void) {
    char    str[100];
    int     cln_buf;

    printf("ÇëÊäÈë×Ö·û´®:");    scanf("%s", str);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    put_string(str);
    putchar('\n');

    return(0);
}
