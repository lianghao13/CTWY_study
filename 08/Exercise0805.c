/*
 *����׳ˣ���ʹ�õݹ鷽����
*/

#include <stdio.h>

/*---���ؽ׳˵�ֵ---*/
int fact(int n) {
    int i = 1;
    int fact = 1;
    if (n > 0) {
        while (i <= n) {
            fact *= i;
            i++;
        }
        return(fact);
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

    printf("�����Ľ׳�Ϊ %d��\n", fact(num));

    return(0);
}
