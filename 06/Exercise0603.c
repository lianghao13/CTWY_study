/*
    ������������������ֵ
*/

#include <stdio.h>

/*---��������---*/
int cube(int x) {
    return (x * x * x);
}

int main(void) {
    int kx;
    int cln_buf;
    
    puts("������һ��������");
    printf("����kx��");      scanf("%d", &kx);
    while((cln_buf = getchar()) != '\n' && cln_buf != EOF)
        ;

    printf("kx��������%d��\n", cube(kx));

    return (0);
}
