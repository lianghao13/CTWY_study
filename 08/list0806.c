/*
 *����׳�
*/

#include <stdio.h>

/*---���ؽ׳˵�ֵ---*/
int factorial(int n) {
    if (n > 0) {
        return(n * factorial(n - 1));
    }
    else {
        return(1);
    }
}

int main(void) {
    int num;
    int c_s;

    printf("������һ��������");     scanf("%d", &num);
    while((c_s = getchar()) != '\n' && c_s != EOF)
        ;

    printf("�����Ľ׳�Ϊ %d��\n", factorial(num));

    return(0);
}
