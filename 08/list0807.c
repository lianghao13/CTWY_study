/*
 *������Լ��
*/

#include <stdio.h>

/*---����vx��vy�����Լ����vx >= vy��---*/
int gcdf(int vx, int vy) {
    return(vy == 0 ? vx : gcdf(vy, vx % vy));
}

/*---���va��vb�����Լ��---*/
int gcd(int va, int vb) {
    return(va > vb ? gcdf(va, vb) : gcdf(vb, va));
}

int main(void) {
    int n1, n2;
    int c_s;

    puts("����������������");
    printf("����1��");      scanf("%d", &n1);
    while((c_s = getchar()) != '\n' && c_s != EOF)
        ;
    printf("����2��");      scanf("%d", &n2);
    while((c_s = getchar()) != '\n' && c_s != EOF)
        ;

    printf("�������������Լ���� %d��\n", gcd(n1, n2));

    return(0);
}
