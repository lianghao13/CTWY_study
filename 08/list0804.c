/*
 *���岢��ʾ�궨��
*/

#include <stdio.h>

#define putsa(str) (putchar('\a'), puts(str))

int main(void) {
    int na;
    int c_scanf;

    printf("������һ��������");     scanf("%d", &na);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    if (na) {
        putsa("���������0��");
    }
    else {
        putsa("�������0��");
    }
    
    return(0);
}
