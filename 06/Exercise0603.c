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
    int c_scanf;
    
    puts("������һ��������");
    printf("����kx��");      scanf("%d", &kx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    printf("kx��������%d��\n", cube(kx));

    return (0);
}
