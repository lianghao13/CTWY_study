/*
 *���岢��ʾ�궨��
*/

#include <stdio.h>

#define putsa(str) (putchar('\a'), puts(str))

int main(void) {
    int na;
    int cln_buf;

    printf("������һ��������");     scanf("%d", &na);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;
    if (na) {
        putsa("���������0��");
    }
    else {
        putsa("�������0��");
    }
    
    return(0);
}
