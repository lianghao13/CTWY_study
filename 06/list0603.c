/*
    ��������������ƽ����
*/

#include <stdio.h>

/*---����ƽ��---*/
int sqr(int x) {
    return (x * x);
}

/*---���ز�ֵ---*/
int diff(int x, int y) {
    return (x > y ? x - y : y - x);
}

int main(void) {
    int kx, ky, kx2, ky2;
    int c_scanf;
    
    puts("����������������");
    printf("����kx��");      scanf("%d", &kx);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;
    printf("����ky��");      scanf("%d", &ky);
    while((c_scanf = getchar()) != '\n' && c_scanf != EOF)
        ;

    kx2 = sqr(kx);          /*kx��ƽ��*/
    ky2 = sqr(ky);          /*ky��ƽ��*/

    printf("kx��ky��ƽ������%d��\n", diff(kx2, ky2));

    return (0);
}
