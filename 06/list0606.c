/*
    �����ĸ������нϴ�ֵ�ĺ���
*/

#include <stdio.h>

/*---���ؽϴ�������ֵ---*/
int maxof(int x, int y) {
    int max;
    if (x > y)
        max = x;
    else
        max = y;
    return (max);
}

/*---�����ĸ����������ֵ---*/
int max4(int w, int x, int y, int z) {
    return(maxof(maxof(w, x), maxof(y, z)));
}

int main(void) {
    int na, nb, nc, nd;
    
    puts("�������ĸ�������");
    printf("����1��");      scanf("%d", &na);
    printf("����2��");      scanf("%d", &nb);
    printf("����3��");      scanf("%d", &nc);
    printf("����4��");      scanf("%d", &nd);

    printf("�ĸ������нϴ������ֵ��%d��\n", max4(na, nb, nc, nd));

    return (0);
}
