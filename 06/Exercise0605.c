/*
   ��������no�ξ��� 
*/

#include <stdio.h>

/*---��������no������---*/
void alert(int no) {
    while (no-- > 0)
        putchar('\a');
}

int main(void) {
    int i;
    int cln_buf;

    printf("���뷢�������Ĵ���:");   scanf("%d", &i);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    puts("���ڷ���������");
    
    alert(i);

    return(0);
}
