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
    int c_scanf;

    printf("���뷢�������Ĵ���:");   scanf("%d", &i);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    puts("���ڷ���������");
    
    alert(i);

    return(0);
}
