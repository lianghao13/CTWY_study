/*
 *�����n����ͬ������ȡ��r�������������
*/

#include <stdio.h>

/*---�����n��������ȡ��r�������������ֵ---*/
int combination(int n, int r) {
    if (r > 0 && r < n) {
        return(combination(n - 1, r - 1) + combination(n - 1, r));
    }
    else {
        if (r == 0 || r == 1)
            return(1);
        else {
            if (r == n) {
                return(n);
            }
            else {
                err_input();
            }
        }
    }
    return();
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
