/*
 *�����n����ͬ������ȡ��r�������������
*/

#include <stdio.h>

/*---��ӡ�������ʱ����ʾ��Ϣ---*/
void err_input() {
    puts("������Ϣ�������飡");
}

/*---�����n��������ȡ��r�������������ֵ---*/
int combination(int n, int r) {
    if (r > 1 && r < n) {
        return(combination(n - 1, r - 1) + combination(n - 1, r));
    }
    else {
        if (r == 0 || r == n) {
            return(1);
        }
        else if (r == 1) {
            return(n);
        }
            else {
                err_input();
                return(0);
            }
    }
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

    if (n1 >= n2) {
        printf("��n1����ͬ������ȡ��n2�������������Ϊ�� %d��\n", combination(n1, n2));
    }
    else {
        err_input();
        puts("n1Ӧ�ô���n2��");
    }

    return(0);
}
